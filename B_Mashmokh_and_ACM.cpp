#include<bits/stdc++.h>
using namespace std;
#define ll long long

int n, k;

ll solve(int last, int len){
    
    if(len == k) return 1;

    ll ans = 0;

    for(int next = last; next <= n; next += last){
        ans += solve(next, len + 1);
    }

    return ans;
}

int main(){
    cin >> n >> k;

    ll ans = 0;

    // start from every possible first element
    for(int i = 1; i <= n; i++){
        ans += solve(i, 1);
    }

    cout << ans << endl;
}