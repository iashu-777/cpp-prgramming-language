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
ll count=0;
for(ll i=0;i<n;i++){
ll x;
cin>>x;
if(x==-1)count++;
v.emplace_back(x);
}
// ll sum=0;
// for(ll i=1;i<n;i++){
//     sum+=(v[i]-v[i-1]);
// }
// sum=abs(sum);
// for(ll i=n-1;i>=0;i--){
//     if(v[i]==-1){
//         if(sum>2){
//             v[i]=sum-1;
//             sum=0;
//         }
//         else{
//             v[i]=0;
//         }
//     }
// }
// ll ssum=0;
// for(ll i=1;i<n;i++){
//     ssum+=(v[i]-v[i-1]);
// }
// cout<<abs(ssum)<<endl;
if(v[0]==-1 && v[n-1]==-1){
    v[0]=0;
    v[n-1]=0;
}
else if(v[0]==-1 || v[n-1]==-1){
    v[0]=max(v[0],v[n-1]);
    v[n-1]=max(v[0],v[n-1]);
}
ll diff=abs(v[n-1]-v[0]);
cout<<diff<<endl;
for(auto x:v){
    if(x==-1)cout<<0<<" ";
    else
    cout<<x<<" ";
}
cout<<endl;

}

return 0;
}