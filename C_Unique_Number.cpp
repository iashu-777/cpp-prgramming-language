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
// vector<ll>v;
// ll k=9;
// string a="9";
// string ans="";
// for(ll i=1;;i++){
//     ll c=1;
//     string p=to_string(c);
//     for(ll j=k;;j--){
//         ans+=p;
//         c++;
//     }

// }
ll t;
cin>>t;

while(t--){
    ll n;
    cin>>n;
   if(n>=1 && n<=9){
    ll i=1;
    cout<<n;
   }
   else if(n>=10 && n<=17){
    ll o=10;
    ll i=19;
    i+=((n-o)*10);
    cout<<i;
   }
   else if(n>=18 && n<=24){
    ll o=18;
    ll i=189;
    i+=((n-o)*100);
    cout<<i;

   }
   else if(n>=25 && n<=30){
    ll o=25;
    ll i=1789;
    i+=((n-o)*1000);
    cout<<i;

   }
   else if(n>=31 && n<=35){
    ll o=31;
    ll i=16789;
    i+=((n-o)*10000);
    cout<<i;

}
   else if(n>=36 && n<=39){
    ll o=36;
    ll i=156789;
    i+=((n-o)*100000);
    cout<<i;

}
   else if(n>=40 && n<=42){
    ll o=40;
    ll i=1456789;
    i+=((n-o)*1000000);
    cout<<i;

}
   else if(n>=43 && n<=44){
    ll o=43;
    ll i=13456789;
    i+=((n-o)*10000000);
    cout<<i;

   }
   else if(n==45){
    ll o=45;
    ll i=123456789;
    i+=((n-o)*100000000);
    cout<<i;
    

   }
   else {
    cout<<-1;
   }
   cout<<endl;


}
return 0;
}