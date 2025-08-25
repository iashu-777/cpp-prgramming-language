// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define mod 998244353
// #define loop(a,b,c) for(ll i=a;i<b;i+=c)
// ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
// ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
// ll sum_of_digits(ll n){ ll s=0; for(;n;n/=10) s+=n%10; return s; }
// vector<bool> sieve(ll n){ vector<bool> v(n+1,1); v[0]=v[1]=0; for(ll i=2;i*i<=n;i++) if(v[i]) for(ll j=i*i;j<=n;j+=i) v[j]=0; return v; }





// int main(){
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
// cout.tie(NULL);
// ll t;
// cin>>t;
// while(t--){
// ll n;
// cin>>n;
// vector<ll>v;
// for(ll i=0;i<n;i++){
// ll x;
// cin>>x;
// v.emplace_back(x);
// }

// sort(v.begin(),v.end());
// // reverse(v.begin(),v.end());
// ll sum=0;
// ll i=0;
// for(i=0;i<n-1;i+=1){
//     sum+=(max(v[i],v[i+1]));
//     ll k=min(v[i],v[i+1]);
//     v[i]-=k;
//     v[i+1]-=k;
// }
// // for(i=0;i<n-2;i+=2){
// //     sum+=(max(v[i],v[i+2]));
// //     ll k=min(v[i],v[i+2]);
// //     v[i]-=k;
// //     v[i+2]-=k;
// // }

// // if(i==n-1){
// //     sum+=v[n-1];
// // }
// cout<<sum<<endl;

// }

// return 0;
// }

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n;
    cin >> n;
    vector<ll> g(n);
    for (int i = 0; i < n; i++) {
        cin >> g[i];
    }
    ll min_grump = *min_element(g.begin(), g.end());
    ll sum_grump = accumulate(g.begin(), g.end(), 0LL);
    cout << sum_grump - min_grump << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}