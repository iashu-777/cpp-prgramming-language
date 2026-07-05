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
ll n,k,x;
cin>>n>>k>>x;
vector<ll>v;
for(ll i=0;i<n;i++){
    ll x;
    cin>>x;
    v.push_back(x);
}
ll count=1;
sort(v.begin(),v.end());
vector<ll>diff;
for(ll i=0;i<n-1;i++){
    if(v[i+1]-v[i]>x)
    diff.push_back(v[i+1]-v[i]);
}
sort(diff.begin(),diff.end());

for(ll i=0;i<diff.size();i++){
    ll gap = diff[i];
        ll needed = (gap + x - 1) / x - 1; // ceil(gap/x) - 1

        if(k >= needed){
            k -= needed; // merge groups
        } else {
            count++; // can't merge -> new group
        }
    
}


cout<<count<<endl;
return 0;
}