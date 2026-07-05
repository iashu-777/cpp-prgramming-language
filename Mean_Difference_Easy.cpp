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
ll n;
cin>>n;
vector<ll>v;
for(ll i=0;i<n;i++){
ll x;
cin>>x;
v.emplace_back(x);
}
if(n==1){
    cout<<0;
}
else if(n==2){
    cout<<max(abs(((v[0]+v[1])/2)-v[0]),abs(((v[0]+v[1])/2)-v[1]));
}
else{
    auto mx=max_element(v.begin(),v.end());
    auto mn=min_element(v.begin(),v.end());
    ll mdx=mx-v.begin(); //index
    ll mnx=mn-v.begin();
    ll sum=v[mdx]+v[mnx];
    ll maxi=max(abs(((v[mdx]+v[mnx])/2 -v[mdx])),abs((v[mdx]+v[mnx])/2 -v[mnx]));
    priority_queue<ll>pq;

    for(ll i=0;i<n;i++){
        if(i==mdx || i==mnx)continue;
        else{
            pq.push(v[i]);
        }

    }
    ll p=3;
    while(pq.size()!=0){
       ll a= pq.top();
       sum+=a;
       ll avg=sum/p;
       p++;
       maxi=max(maxi,max(abs(avg-v[mdx]),abs(avg-v[mnx])));
       pq.pop();
    }
    cout<<maxi;
}
cout<<endl;
}

return 0;
}