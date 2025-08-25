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





int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll n,q;
cin>>n>>q;
vector<ll>a;
vector<ll>b;

for(ll i=0;i<n;i++){
    ll x;
    cin>>x;
    a.push_back(x);
}
for(ll i=0;i<n;i++){
    ll x;
    cin>>x;
    b.push_back(x);
}
ll sum=0;
for(ll i=0;i<n;i++){
    sum+=(min(a[i],b[i]));
}
for(ll i=0;i<q;i++){
    char c;
    cin>>c;
    if(c=='A'){
        ll c,d;
        cin>>c>>d;
        sum-=(min(a[c-1],b[c-1]));
        sum+=(min(d,b[c-1]));
        a[c-1]=d;
    }
    else{
        ll c,d;
        cin>>c>>d;
        sum-=(min(a[c-1],b[c-1]));
        sum+=(min(d,a[c-1]));
        b[c-1]=d;
    }
    cout<<sum<<endl;
}

return 0;
}