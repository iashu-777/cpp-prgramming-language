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
ll a,b;
cin>>a>>b;

if(a>b){
    swap(a,b);
}
ll p=(b+5-4)/5;
ll q=(b+5-3)/5;
ll r=(b+5-2)/5;
ll s=(b+5-1)/5;
ll t=(b+5-5)/5;
ll n=a%5;
ll c=a/5;
ll sum=p+q+r+s+t;
if(n==1){
    cout<<(sum*c)+p;
}
else if(n==2){
    cout<<(sum*c)+p+q;
}
else if(n==3){
    cout<<(sum*c)+p+q+r;
}
else if(n==4){
    cout<<(sum*c)+p+q+r+s;
}
else if(n==0){
    cout<<sum*c;
}


return 0;
}