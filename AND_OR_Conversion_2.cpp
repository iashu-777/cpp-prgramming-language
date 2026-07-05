#include<bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 998244353;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;

        vector<ll> dp0(n, 0), dp1(n, 0), pref(n, 0);

        int last0 = -1, last1 = -1;

        for(int i = 0; i < n; i++){
            if(s[i] == '0') last0 = i;
            else last1 = i;

            // dp0[i]
            if(last0 != -1){
                dp0[i] = 1; // whole prefix [0..i] as one 0-block
                if(last0 > 0){
                    dp0[i] = (dp0[i] + pref[last0 - 1]) % mod;
                }
            }

            // dp1[i]
            if(last1 != -1){
                dp1[i] = 1; // whole prefix [0..i] as one 1-block
                if(last1 > 0){
                    dp1[i] = (dp1[i] + pref[last1 - 1]) % mod;
                }
            }

            pref[i] = (dp0[i] + dp1[i]) % mod;
            if(i > 0) pref[i] = (pref[i] + pref[i-1]) % mod;
        }

        cout << (dp0[n-1] + dp1[n-1]) % mod << '\n';
    }
    return 0;
}