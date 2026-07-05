#include <bits/stdc++.h>
using namespace std;

static const int MOD = 998244353;

int add(int a, int b){
    a += b;
    if(a >= MOD) a -= MOD;
    return a;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector<long long> a(n+1);
        for(int i=0;i<=n;i++) cin >> a[i];

        long long a0 = a[0];

        vector<long long> b;
        for(int i=1;i<=n;i++) b.push_back(a[i]);
        sort(b.begin(), b.end());  // IMPORTANT

        vector<vector<int>> dp(n+1, vector<int>(a0+1, 0));
        dp[0][0] = 1;

        for(int i=0;i<n;i++){
            for(int j=0;j<=a0;j++){
                if(dp[i][j] == 0) continue;

                // option 1: use own box
                if(b[i] > 0){
                    dp[i+1][j] = add(dp[i+1][j], dp[i][j]);
                }

                // option 2: take from box 0
                if(j < a0){
                    dp[i+1][j+1] = add(dp[i+1][j+1], dp[i][j]);
                }
            }
        }

        int ans = 0;
        for(int j=0;j<=a0;j++){
            ans = add(ans, dp[n][j]);
        }

        cout << ans << "\n";
    }
    return 0;
}
