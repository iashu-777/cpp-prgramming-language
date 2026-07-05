// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define mod 998244353
// #define loop(a,b,c) for(ll i=a;i<b;i+=c)
// ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
// ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
// ll sum_of_digits(ll n){ ll s=0; for(;n;n/=10) s+=n%10; return s; }
// vector<bool> sieve(ll n){ vector<bool> v(n+1,1); v[0]=v[1]=0; for(ll i=2;i*i<=n;i++) if(v[i]) for(ll j=i*i;j<=n;j+=i) v[j]=0; return v; }
//  ll findIndex(const vector<ll>& v, ll key, ll i, ll j){ auto it=lower_bound(v.begin()+i,v.begin()+j+1,key); return (it!=v.begin()+j+1 && *it==key)? it-v.begin():-1; }
// long long countDivisors(long long n){ long long c=0; for(long long i=1;i*i<=n;i++) if(n%i==0) c+=(i==n/i?1:2); return c; }
// bool isPowerOftwo(ll n){ return (n > 0) && ((n & (n - 1)) == 0);}
//   ll lbound(const vector<ll>& v, ll key, ll i, ll j){ return lower_bound(v.begin()+i, v.begin()+j+1, key) - (v.begin()+i); }





// int main(){
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
// cout.tie(NULL);
// ll t;
// cin>>t;
// while(t--)
// {
//     ll n,x,s;
//     cin>>n>>x>>s;
//     string st;
//     cin>>st;
//     ll flag=0;
//     vector<vector<ll>>v(x,vector<ll>(s,0));
//     for(ll i=0;i<n;i++){
//       if(st[i]=='E'){
//         for(ll j=0;j<x;j++){
//           if(v[j][0]==1){
//             for(ll k=1;k<s;k++){
//               if(v[j][k]==0){
//                 v[j][k]=1;
//                 flag=1;
//                 break;
//               }
//             }
//           }
//           if(flag==1){
//             flag=0;
//             break;
//           }
//         }
//       }
//       else if(st[i]=='A'){
//         for(ll j=0;j<x;j++){
//             for(ll k=0;k<s;k++){
//               if(v[j][k]==0){
//                 v[j][k]=1;
//                 flag=1;
//                 break;
//               }
//             }
//           if(flag==1){
//             flag=0;
//             break;
//           }
//         }
//       }
//       else{
//         for(ll j=0;j<x;j++){
//           if(v[j][0]==0){

//           }
//         }
//       }
//     }


// }
// return 0;
// }


#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int n, x, s;
string u;

int dfs(int idx, int tables) {
    if (tables < 0) return -1;
    if (idx == 0) {
        return (tables == 0) ? 0 : -1;
    }

    int ans = dfs(idx - 1, tables);
    char c = u[idx - 1];

    if (c == 'I' || c == 'A') {
        int res = dfs(idx - 1, tables - 1);
        if (res != -1) {
            ans = max(ans, res + 1);
        }
    }
    if (c == 'E' || c == 'A') {
        int res = dfs(idx - 1, tables);
        if (res != -1) {
            long long cap = (long long)tables * s;
            if (res < cap) {
                ans = max(ans, res + 1);
            }
        }
    }

    return ans;
}

void solve() {
    if (!(cin >> n >> x >> s)) return;
    cin >> u;

    long long eia = 0;

    int ans = 0;
    int limit = min(x, n);
    for (int j = 0; j <= limit; ++j) {
        ans = max(ans, dfs(n, j));
    }
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}