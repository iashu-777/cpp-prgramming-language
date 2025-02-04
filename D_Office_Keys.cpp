// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define mod 998244353
// #define loop(a,b,c) for(ll i=a;i<b;i+=c)



// int main(){
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
// ll n,k,p;
// cin>>n>>k>>p;
// vector<ll>n1;
// vector<ll>p1;
// loop(0,n,1){
//     ll x;
//     cin>>x;
//     n1.push_back(x);
// }
// loop(0,k,1){
//     ll x;
//     cin>>x;
//     p1.push_back(x);
// }
// sort(n1.begin(),n1.end());
// sort(p1.begin(),p1.end());
// ll mini=INT_MAX;
// ll maxi=INT_MIN;
// for(ll i=0;i<n;i++){
// mini=INT_MAX;
// ll key=-1;
//     for(ll j=0;j<k;j++){
//         if(p1[j]==-1)continue;
//         ll c=abs(n1[i]-p1[j]);
//         ll dist=c+abs(p-p1[j]);
//         // mini=min(dist,mini);
//         if(dist<mini){
//             mini=dist;
//             key=j;
//         }
//     }
//     if(key!=-1&&mini!=INT_MAX){

//     p1[key]=-1;
//     maxi=max(maxi,mini);
//     }   
// }


// cout<<maxi;
// return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a, b, c) for (ll i = a; i < b; i += c)

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k, p;
    cin >> n >> k >> p;
    vector<ll> n1(n);
    vector<ll> p1(k);

    loop(0, n, 1) cin >> n1[i];
    loop(0, k, 1) cin >> p1[i];

    // Sort people and keys to enable optimal matching
    sort(n1.begin(), n1.end());
    sort(p1.begin(), p1.end());

    ll maxi = INT_MIN;
    vector<bool> used(k, false);  // Keep track of used keys

    for (ll i = 0; i < n; i++) {
        ll mini = INT_MAX;
        ll key = -1;

        for (ll j = 0; j < k; j++) {
            if (used[j]) continue;  // Skip already taken keys

            ll c = abs(n1[i] - p1[j]);
            ll dist = c + abs(p - p1[j]);

            if (dist < mini) {
                mini = dist;
                key = j;
            }
        }

        if (key != -1) {
            used[key] = true;  // Mark this key as taken
            maxi = max(maxi, mini);
        }
    }

    cout << maxi << '\n';
    return 0;
}
