// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define mod 998244353
// #define loop(a,b,c) for(ll i=a;i<b;i+=c)

// ll func(ll n,ll k,vector<ll>&v){
//     ll count=0;
//     unordered_map<ll,ll>mpp;
//     for(auto x:v){
//         mpp[x]++;
//     }
//     for(ll i=0;i<n;i++){
//         if(mpp.find(k-v[i])!=mpp.end())
//         {
//             if(mpp.find(k-v[i])->first==v[i] && mpp.find(k-v[i])->second>1){
//                 mpp[k-v[i]]--;
//                 count++;
//                 if(mpp[k-v[i]]==0){
//                     mpp.erase(k-v[i]);
//                 }
//             }
//             else{
//                 mpp[k-v[i]]--;
//                 count++;
//                 if(mpp[k-v[i]]==0){
//                     mpp.erase(k-v[i]);
//                 }
//             }
//         }
//     }
//     return count;
// }

// int main(){
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
// ll t;
// cin>>t;
// while(t--){
//     ll n,k;
//     cin>>n>>k;
//     vector<ll>v;
//     for(ll i=0;i<n;i++){
//         ll x;
//         cin>>x;
//         v.push_back(x);
//     }
//     cout<<func(n,k,v)<<"\n";
 
// }
// return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a,b,c) for(ll i=a;i<b;i+=c)

ll func(ll n, ll k, vector<ll>& v) {
    ll count = 0;
    unordered_map<ll, ll> mpp;
    for (auto x : v) {
        mpp[x]++;
    }
    for (ll i = 0; i < n; i++) {
        if (mpp[v[i]] > 0 && mpp[k - v[i]] > 0) {
            if (v[i] == k - v[i]) {
                // Special case when both elements are the same
                if (mpp[v[i]] > 1) {
                    count++;
                    mpp[v[i]] -= 2;  // Use both instances
                }
            } else {
                count++;
                mpp[v[i]]--;
                mpp[k - v[i]]--;
            }
        }
    }
    return count;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++) {
            cin >> v[i];
        }
        cout << func(n, k, v) << "\n";
    }
    return 0;
}
