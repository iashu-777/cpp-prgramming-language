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
unordered_map<ll,ll>mpp;
for(ll i=0;i<n;i++){
ll x;
cin>>x;
mpp[x]++;
v.emplace_back(x);
}

vector<ll>pos;
for(ll i=n;i>=1;i--){
    if(mpp.find(i)==mpp.end()){
        pos.push_back(i);
    }
}
for(ll i=0,j=0;i<n;i++){
    if(v[i]==0){
        v[i]=pos[j];
        j++;
    }
}
ll count=0;
ll idx1=-1;
ll idx2=-1;
for(ll i=0;i<n;i++){
    if(v[i]!=i+1){
        idx1=i;
        break;
    }
}
for(ll i=n-1;i>=0;i--){
    if(v[i]!=i+1){
        idx2=i;
        break;
    }
}
if(idx1!=-1 && idx2!=-1)
cout<<idx2-idx1+1<<endl;
else
cout<<0<<endl;

}

return 0;
}