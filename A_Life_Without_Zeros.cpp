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
ll c=a+b;
string a1,b1,c1;
a1=to_string(a);
b1=to_string(b);
c1=to_string(c);
while(a1.find('0')!=string::npos){
    a1.erase(a1.find('0'),1);
}
while(b1.find('0')!=string::npos){
    b1.erase(b1.find('0'),1);
}
while(c1.find('0')!=string::npos){
    c1.erase(c1.find('0'),1);

}
ll x,y,z;
x=stoll(a1);
y=stoll(b1);
z=stoll(c1);
if(x+y==z)
cout<<"YES";
else cout<<"NO";


return 0;
}