#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a,b,c) for(ll i=a;i<b;i+=c)
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
ll sum_of_digits(ll n){ ll s=0; for(;n;n/=10) s+=n%10; return s; }
vector<bool> sieve(ll n){ vector<bool> v(n+1,1); v[0]=v[1]=0; for(ll i=2;i*i<=n;i++) if(v[i]) for(ll j=i*i;j<=n;j+=i) v[j]=0; return v; }
long long countDivisors(long long n){ long long c=0; for(long long i=1;i*i<=n;i++) if(n%i==0) c+=(i==n/i?1:2); return c; }
bool isPowerOftwo(ll n){ return (n > 0) && ((n & (n - 1)) == 0);}





int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll t;
cin>>t;
while(t--){
ll n,k;
cin>>n>>k;
vector<ll>v;
for(ll i=0;i<n;i++){
ll x;
cin>>x;
v.emplace_back(x);
}
sort(v.begin(),v.end());
ll mini=*min_element(v.begin(),v.end());
if(k==1){
    ll ans=mini;
    for(ll i=0;i<n-1;i++){
        ans=min(ans,abs(v[i]-v[i+1]));
    }
    cout<<ans;
}
// else if(k==2){
//     ll ans=mini;
  
//     for(ll i = 0; i < n; i++){
//     for(ll j = i+1; j < n; j++){
//         ans = min(ans, abs(v[j] - v[i]));
//         ans = min(ans, abs(v[j] - 2*v[i]));
//     }
// }
//     cout<<ans;
// }
else if (k == 2) {
    ll ans = v[0];
    // Check original elements and adjacent differences first
    for (int i = 0; i < n - 1; i++) ans = min(ans, v[i + 1] - v[i]);
    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            ll d = v[j] - v[i];
            ans = min(ans, d);
            // Binary search for the element closest to the difference 'd'
            auto it = lower_bound(v.begin(), v.end(), d);
            if (it != v.end()) ans = min(ans, *it - d);
            if (it != v.begin()) ans = min(ans, d - *prev(it));
        }
    }
    cout << ans;
}
else
{
    cout<<0;
}

cout<<endl;
}

return 0;
}