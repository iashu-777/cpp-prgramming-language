// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define mod 998244353
// #define loop(a,b,c) for(ll i=a;i<b;i+=c)
// ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
// ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
// ll sum_of_digits(ll n){ ll s=0; for(;n;n/=10) s+=n%10; return s; }
// vector<bool> sieve(ll n){ vector<bool> v(n+1,1); v[0]=v[1]=0; for(ll i=2;i*i<=n;i++) if(v[i]) for(ll j=i*i;j<=n;j+=i) v[j]=0; return v; }
// long long countDivisors(long long n){ long long c=0; for(long long i=1;i*i<=n;i++) if(n%i==0) c+=(i==n/i?1:2); return c; }
// bool isPowerOftwo(ll n){ return (n > 0) && ((n & (n - 1)) == 0);}





// int main(){
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
// cout.tie(NULL);
// ll t;
// cin>>t;
// while(t--){
// ll n,k;
// cin>>n>>k;
// vector<ll>v;
// unordered_map<ll,ll>mpp;
// for(ll i=0;i<n;i++){
// ll x;
// cin>>x;
// // v.emplace_back(x);
// mpp[x]++;
// }

// // for(auto x:v){
// //     mpp[x]++;
// // }
// ll i=0;

// ll flag=0;

// for (auto it = mpp.begin(); it != mpp.end(); it++) {
//     auto it2 = mpp.find((it->first)-k);

//     if (it2 != mpp.end() && it2 != it) {
//         flag=1;
//         break;
//     }
// }
// if(flag==1){
//     cout<<"YES";

// }
// else{
//     cout<<"NO";
// }
// cout<<endl;
// }

// return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        long long n, k;
        cin >> n >> k;
        vector<long long>a(n);
        for(auto &x:a) cin>>x;

        sort(a.begin(), a.end());

        bool ok = false;
        int i = 0, j = 1;

        while(j < n){
            long long diff = a[j] - a[i];
            if(diff == k){
                ok = true;
                break;
            }
            else if(diff < k){
                j++;
            }
            else {
                i++;
                if(i == j) j++;
            }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }
    return 0;
}
