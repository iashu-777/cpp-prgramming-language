#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a,b,c) for(ll i=a;i<b;i+=c)
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
ll sum_of_digits(ll n){ ll s=0; for(;n;n/=10) s+=n%10; return s; }
vector<bool> sieve(ll n){ vector<bool> v(n+1,1); v[0]=v[1]=0; for(ll i=2;i*i<=n;i++) if(v[i]) for(ll j=i*i;j<=n;j+=i) v[j]=0; return v; }
 ll lbound(vector<ll>v,ll x){ ll k= lower_bound(v.begin(), v.end(), x) - v.begin();return k;}
long long countDivisors(long long n){ long long c=0; for(long long i=1;i*i<=n;i++) if(n%i==0) c+=(i==n/i?1:2); return c; }





int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll t;
cin>>t;
while(t--){
    ll w,h;
    cin>>w>>h;
    vector<ll>v1;
    vector<ll>v2;
    vector<ll>v3;
    vector<ll>v4;
    ll k1;
    cin>>k1;
    for(ll j=0;j<k1;j++){
        ll x;
        cin>>x;
            v1.push_back(x);
        }
    ll k2;
    cin>>k2;
    for(ll j=0;j<k2;j++){
        ll x;
        cin>>x;
            v2.push_back(x);
        }
    ll k3;
    cin>>k3;
    for(ll j=0;j<k3;j++){
        ll x;
        cin>>x;
            v3.push_back(x);
        }
    ll k4;
    cin>>k4;
    for(ll j=0;j<k4;j++){
        ll x;
        cin>>x;
            v4.push_back(x);
        }
        ll maxi1=max(v1[k1-1]-v1[0],v2[k2-1]-v2[0]);
        ll maxi2=max(v3[k3-1]-v3[0],v4[k4-1]-v4[0]);
        ll ans1=0;
        ll ans2=0;
        
            ans1+=(maxi1*h);
        
        
            ans2+=(maxi2*w);
        
        
        cout<<max(ans1,ans2)<<endl;

}
return 0;
}