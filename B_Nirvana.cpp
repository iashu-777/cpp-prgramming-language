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


ll pro(ll ne){
    ll prod=1;
while(ne>0){
    ll rem=ne%10;
    prod=prod*rem;
    ne=ne/10;
}
return prod;
}


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll n;
cin>>n;
string s=to_string(n);
ll maxi=pro(n);
if(n<10){
    cout<<n;
}
// else if(n%10==0){
//     cout<<pro(n-1);
// }
else{

    for(ll i=s.size()-1;i>=1;i--){
        if(s[i-1]!='0'){
            
            s[i]='9';
            s[i-1]--;
        }
        else{
            s[i]='9';
            
        }
        // cout<<s<<endl;
        ll c=stoll(s);
        maxi=max(maxi,pro(c));
    }
    cout<<maxi<<endl;
}
return 0;
}