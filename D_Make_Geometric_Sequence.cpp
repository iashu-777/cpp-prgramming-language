// // // // #include<bits/stdc++.h>
// // // // using namespace std;
// // // // #define ll long long
// // // // #define mod 998244353
// // // // #define loop(a,b,c) for(ll i=a;i<b;i+=c)
// // // // ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
// // // // ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }

// // // // #define EPS 1e-9

// // // // int main(){
// // // // ios_base::sync_with_stdio(false);
// // // // cin.tie(NULL);
// // // // ll t;
// // // // cin>>t;
// // // // while(t--){
// // // //     double n;
// // // //     cin>>n;
// // // //     vector<double>v;
// // // //     for(ll i=0;i<n;i++){
// // // //         double x;
// // // //         cin>>x;

// // // //         v.push_back(x);
// // // //     }
// // // //     sort(v.begin(),v.end());
// // // //     // double d=(double)v[1]/v[0];
// // // //     // ll flag=0;
// // // //     // for(ll i=0;i<n-1;i++){
// // // //     //     if((double)v[i+1]/v[i]!=d){
// // // //     //         flag=1;
// // // //     //         break;
// // // //     //     }
// // // //     // }
// // // //     // if(flag==1){
// // // //     //     cout<<"No";
// // // //     // }
// // // //     // else{
// // // //     //     cout<<"Yes";
// // // //     // }
// // // //     // cout<<endl;
// // // //     double d = v[1] / v[0];
// // // //         bool flag = false;

// // // //         for (ll i = 0; i < n - 1; i++) {
// // // //             double ratio = v[i + 1] / v[i];
// // // //             if (fabs(ratio - d) > EPS) {
// // // //                 flag = true;
// // // //                 break;
// // // //             }
// // // //         }

// // // //         cout << (flag ? "No" : "Yes") << "\n";
    
// // // // }
// // // // return 0;
// // // // }

// // // #include <bits/stdc++.h>
// // // using namespace std;
// // // #define ll long long

// // // int main() {
// // //     ios_base::sync_with_stdio(false);
// // //     cin.tie(NULL);

// // //     ll t;
// // //     cin >> t;
// // //     while (t--) {
// // //         ll n;
// // //         cin >> n;
// // //         vector<ll> v(n);
// // //         for (ll i = 0; i < n; i++) {
// // //             cin >> v[i];
// // //         }

// // //         sort(v.begin(), v.end());

// // //         if (n <= 2) {
// // //             cout << "Yes\n";
// // //             continue;
// // //         }
// // // ll k=v[0]*v[n-1];
// // //         // Use cross multiplication to compare ratios: (v[2] * v[0] == v[1] * v[1])
// // //         bool isGP = true;
// // //         for (ll i = 0; i <= (n/2) ; i++) {
// // //             if(v[i]*v[n-i-1]!=k){
// // //                 isGP=false;

// // //             }
// // //         }

// // //         cout << (isGP ? "Yes" : "No") << '\n';
// // //     }

// // //     return 0;
// // // }


// // #include <bits/stdc++.h>
// // using namespace std;
// // #define ll long long

// // bool isGeometricProgression(vector<ll>& a) {
// //     int n = a.size();
// //     sort(a.begin(), a.end());

// //     if (n <= 2) return true;

// //     ll r1 = a[1], r0 = a[0];

// //     for (int i = 1; i < n - 1; ++i) {
// //         // Check: a[i+1] * a[i-1] == a[i] * a[i]
// //         if (a[i + 1] * a[i - 1] != a[i] * a[i]) {
// //             return false;
// //         }
// //     }

// //     return true;
// // }

// // int main() {
// //     ios::sync_with_stdio(false);
// //     cin.tie(0);

// //     int T;
// //     cin >> T;

// //     vector<string> results;
// //     while (T--) {
// //         int n;
// //         cin >> n;
// //         vector<ll> a(n);
// //         for (int i = 0; i < n; ++i) {
// //             cin >> a[i];
// //         }
// //         results.push_back(isGeometricProgression(a) ? "Yes" : "No");
// //     }

// //     for (const string& res : results) {
// //         cout << res << '\n';
// //     }

// //     return 0;
// // }


// #include <bits/stdc++.h>
// using namespace std;

// void solve() {
//     int N;
//     cin >> N;
//     vector<long long> A(N);
//     vector<long long> abs_A(N);
//     int pos_count = 0, neg_count = 0;
    
//     // Read input and count positive/negative numbers
//     for (int i = 0; i < N; i++) {
//         cin >> A[i];
//         abs_A[i] = abs(A[i]);
//         if (A[i] > 0) pos_count++;
//         else neg_count++;
//     }
    
//     // Sort absolute values
//     sort(abs_A.begin(), abs_A.end());
    
//     // Function to check if a sequence forms a geometric sequence
//     auto is_geometric = [&](vector<long long>& seq) -> bool {
//         if (seq[0] == 0) return false; // No zero allowed
//         double r = (double)seq[1] / seq[0];
//         for (int i = 2; i < N; i++) {
//             if (seq[i] == 0 || abs((double)seq[i] / seq[i-1] - r) > 1e-9) {
//                 return false;
//             }
//         }
//         return true;
//     };
    
//     // Check ascending order (r >= 1 or 0 < r < 1)
//     bool valid = is_geometric(abs_A);
//     if (valid) {
//         double r = (double)abs_A[1] / abs_A[0];
//         if (r >= 0) {
//             // For r > 0, any sign combination is fine as long as absolute values match
//             cout << "Yes\n";
//             return;
//         } else {
//             // For r < 0, signs must alternate
//             if (N % 2 == 0) {
//                 // Need N/2 positive and N/2 negative
//                 if (pos_count == N/2 && neg_count == N/2) {
//                     cout << "Yes\n";
//                     return;
//                 }
//             } else {
//                 // Need ceil(N/2) of one sign and floor(N/2) of the other
//                 if ((pos_count == (N+1)/2 && neg_count == N/2) || 
//                     (pos_count == N/2 && neg_count == (N+1)/2)) {
//                     cout << "Yes\n";
//                     return;
//                 }
//             }
//         }
//     }
    
//     // Check descending order (r <= 1 or r < 0)
//     reverse(abs_A.begin(), abs_A.end());
//     valid = is_geometric(abs_A);
//     if (valid) {
//         double r = (double)abs_A[1] / abs_A[0];
//         if (r >= 0) {
//             cout << "Yes\n";
//             return;
//         } else {
//             if (N % 2 == 0) {
//                 if (pos_count == N/2 && neg_count == N/2) {
//                     cout << "Yes\n";
//                     return;
//                 }
//             } else {
//                 if ((pos_count == (N+1)/2 && neg_count == N/2) || 
//                     (pos_count == N/2 && neg_count == (N+1)/2)) {
//                     cout << "Yes\n";
//                     return;
//                 }
//             }
//         }
//     }
    
//     cout << "No\n";
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
    
//     int T;
//     cin >> T;
//     while (T--) {
//         solve();
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
string s="abbda";
s.erase(3,1);
cout<<s;
return 0;
}