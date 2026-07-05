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



bool comp(const pair<ll,ll>&a ,const pair<ll,ll>&b){
    if(a.first==b.first){
        return a.second<b.second;
    }
    return a.first>b.first;
}

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
        v.push_back(x);
    }
    vector<ll>b;
    
    for(auto x:v){
        b.push_back(x%k);
    }
    vector<pair<ll,ll>>v1;
    vector<ll>exd;
    for(ll i=0;i<b.size();i++){
        if(b[i]==0){
            exd.push_back(i+1);
        }
        else
        v1.push_back({b[i],i+1});
    }
    // for(auto x:v1){
    //     cout<<x.first<<" "<<x.second<<endl;
    // }
    sort(v1.begin(),v1.end(),comp);
    for(auto x:exd){
        cout<<x<<" ";
    }
    for(auto x:v1){
        cout<<x.second<<" ";
    }
    cout<<endl;
}
return 0;
}