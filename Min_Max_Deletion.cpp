// // #include<bits/stdc++.h>
// // using namespace std;
// // #define ll long long
// // #define mod 998244353
// // #define loop(a,b,c) for(ll i=a;i<b;i+=c)
// // ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
// // ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }



// // int main(){
// // ios_base::sync_with_stdio(false);
// // cin.tie(NULL);
// // ll t;
// // cin>>t;
// // while(t--){
// //     ll n,q;
// //     cin>>n>>q;
// //     vector<ll>v;
// //     for(int i=0;i<n;i++){
// //         ll x;
// //         cin>>x;
// //         v.push_back(x);
// //     }
// //     for(int i=0;i<q;i++){
// //         ll a,b;
// //         cin>>a>>b;
// //         v[a-1]=b;

// //         ll score=0;
// //         for(int k=0;k<n-1;k++){
// //             score+=min(v[k],v[k+1]);
// //         }
// //         cout<<score<<endl;
// //     }
// // }
// // return 0;
// // }

// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define mod 998244353
// #define loop(a,b,c) for(ll i=a;i<b;i+=c)
// ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
// ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }

// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     ll t;
//     cin >> t;
//     while (t--) {
//         ll n, q;
//         cin >> n >> q;

//         vector<ll> v;
//         v.reserve(n); // Reserving space upfront for efficiency

//         for (int i = 0; i < n; i++) {
//             ll x;
//             cin >> x;
//             v.push_back(x);
//         }

//         for (int i = 0; i < q; i++) {
//             ll a, b;
//             cin >> a >> b;
//             v[a - 1] = b;

//             ll score = 0;
//             for (int k = 0; k < n - 1; k++) {
//                 score += min(v[k], v[k + 1]);
//             }
//             cout << score << '\n'; // Using '\n' instead of endl for efficiency
//         }
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a,b,c) for(ll i=a;i<b;i+=c)
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--) {
        ll n, q;
        cin >> n >> q;

        vector<ll> v;
        v.reserve(n); // Reserving space for efficiency

        for (int i = 0; i < n; i++) {
            ll x;
            cin >> x;
            v.push_back(x);
        }

        // Compute initial difference array and total score
        vector<ll> diff(n-1);
        ll score = 0;
        for (int i = 0; i < n-1; i++) {
            diff[i] = min(v[i], v[i+1]);
            score += diff[i];
        }

        for (int i = 0; i < q; i++) {
            ll a, b;
            cin >> a >> b;
            a--; // Convert to zero-based index

            // Update only the affected differences
            if (a > 0) score -= diff[a-1]; // Remove previous contribution
            if (a < n-1) score -= diff[a]; 

            v[a] = b; // Update value

            if (a > 0) { diff[a-1] = min(v[a-1], v[a]); score += diff[a-1]; }
            if (a < n-1) { diff[a] = min(v[a], v[a+1]); score += diff[a]; }

            cout << score << '\n'; // Efficient output
        }
    }
    return 0;
}