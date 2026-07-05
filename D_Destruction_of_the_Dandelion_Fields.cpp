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
priority_queue<ll>pq1;
vector<ll>pq2;
for(ll i=0;i<n;i++){
ll x;
cin>>x;
v.emplace_back(x);

}
for(auto x:v){
    if(x%2==0)
        pq1.push(x);
    else
        pq2.push_back(x);
    }
ll sum=0;
if(pq2.size()==0){
    sum=0;;
}
else{
    // for(ll i=1;pq2.size()>0;i++){
    //     if(i%2==0){
    //         pq2.pop();
    //     }
    //     else{
    //         sum+=pq2.top();
    //         pq2.pop();
    //     }
    // }
    sort(pq2.begin(),pq2.end(),greater<ll>());
    for(ll i=0;i<(pq2.size()+2-1)/2;i++){
        sum+=pq2[i];
        }
    while(pq1.size()>0){
        sum+=pq1.top();
        pq1.pop();
    }
}
cout<<sum<<endl;
}

return 0;
}