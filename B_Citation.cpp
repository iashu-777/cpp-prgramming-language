// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define mod 998244353
// #define loop(a,b,c) for(ll i=a;i<b;i+=c)
// ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
// ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }



// int main(){
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
// ll n;
// cin>>n;
// vector<ll>v;
// for(ll i=0;i<n;i++){
//     ll x;
//     cin>>x;

//     v.push_back(x);

// }
// sort(v.begin(),v.end());
// int ans=1;
// // 
// for(int i=0;i<n;i++){
//     if(v[i]<(n-i+1)){
//         ans=v[i];
//     }
//     else{
//         break;
//     }
// }
// cout<<ans;
// return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    sort(v.begin(), v.end()); // Sorting for efficient checking

    ll left = 0, right = n, ans = 0;

    while (left <= right) {
        ll mid = (left + right) / 2;

        // Count elements >= mid using lower_bound()
        ll count = n - (lower_bound(v.begin(), v.end(), mid) - v.begin());

        if (count >= mid) {
            ans = mid; // Update answer to mid if condition holds
            left = mid + 1; // Search higher values
        } else {
            right = mid - 1; // Search lower values
        }
    }

    cout << ans << endl;
    return 0;
}