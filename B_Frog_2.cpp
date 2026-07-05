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
bool isPowerOftwo(ll n){ return (n > 0) && ((n & (n - 1)) == 0);}

ll func(ll n,vector<ll>&v,vector<ll>&dp,ll k){
    if(n==0){
        return 0;
    }
    if(n==1){
        return abs(v[1]-v[0]);
    }
    if(dp[n]!=-1)
    return dp[n];
    ll mini=INT_MAX;
    for(ll i=1;i<=k;i++){
        if(n>=i){

            ll p=func(n-i,v,dp,k)+abs(v[n]-v[n-i]);
            mini=min(mini,p);
        }
    }

    // ll a=func(n-1,v,dp,k)+abs(v[n]-v[n-1]);
    // ll  b=func(n-2,v,dp,k)+abs(v[n]-v[n-2]);
    // return dp[n]=min(a,b);
    return dp[n]=mini;
}




int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll n,k;
cin>>n>>k;
vector<ll>v;
for(ll i=0;i<n;i++){
    ll x;
    cin>>x;
    v.push_back(x);
}
vector<ll>dp(n+1,-1);
cout<<func(n-1,v,dp,k);
return 0;
}