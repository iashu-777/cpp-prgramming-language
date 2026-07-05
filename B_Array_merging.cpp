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
    ll n;
    cin>>n;
    vector<ll>a;
    vector<ll>b;
    unordered_map<ll,ll>mpp1;
    unordered_map<ll,ll>mpp2;

    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        mpp1[x]=0;
        // mpp[x].insert(i);
        a.push_back(x);
    }
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        // mpp[x].insert(i);
        b.push_back(x);
    }
   for(ll i=0;i<n;){
    ll k=a[i];
    ll count=0;
    while(i<n && k==a[i]){
        i++;
        count++;
    }
    mpp1[k]=max(mpp1[k],count);
   }
   for(ll i=0;i<n;){
    ll k=b[i];
    ll count=0;
    while(i<n && k==b[i]){
        i++;
        count++;
    }
    mpp2[k]=max(mpp2[k],count);;
   }
   for(auto x:mpp1){
    mpp2[x.first]+=x.second;
   }
   ll maxi=INT_MIN;
   for(auto x:mpp2){
    maxi=max(maxi,x.second);
   }
   cout<<maxi<<endl;

}
return 0;
}