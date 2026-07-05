#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a,b,c) for(ll i=a;i<b;i+=c)
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
ll sum_of_digits(ll n){ ll s=0; for(;n;n/=10) s+=n%10; return s; }
vector<bool> sieve(ll n){ vector<bool> v(n+1,1); v[0]=v[1]=0; for(ll i=2;i*i<=n;i++) if(v[i]) for(ll j=i*i;j<=n;j+=i) v[j]=0; return v; }
 ll lbound(vector<ll>v,ll x){ ll k= upper_bound(v.begin(), v.end(), x) - v.begin();return k;}
long long countDivisors(long long n){ long long c=0; for(long long i=1;i*i<=n;i++) if(n%i==0) c+=(i==n/i?1:2); return c; }





int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll t;
cin>>t;
ll n=1000000000;
// vector<bool>v(n+1,0);
// v.push_back(-1);
// for(ll i=1;;i++){
//     if(i*i>n && i*i*i>n)break;
//     if(i*i<=n)
//     v[i*i]=1;
//     if(i*i*i<=n)
//     v[i*i*i]=1;

// }
set<ll> st; // to avoid duplicates (numbers that are both square & cube, i.e. sixth powers)
    for(ll i=1; i*i <= n; i++) st.insert(i*i);
    for(ll i=1; i*i*i <= n; i++) st.insert(i*i*i);

vector<ll>ans(st.begin(),st.end());

while(t--){
    ll n;
    cin>>n;
    cout<<lbound(ans,n)<<endl;
}
return 0;
}