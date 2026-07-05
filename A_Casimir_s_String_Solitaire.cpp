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
    string s;
    cin>>s;
    ll flag=0;
    if(s.size()%2!=0){
        flag=0;
    }
    else{
        unordered_map<char,ll>mpp;
        for(auto x:s){
            mpp[x]++;
        }
        ll counta=mpp['A'];
        ll countb=mpp['B'];
        ll countc=mpp['C'];
        // if(counta==countb && (countc==(2*counta))){
        //     flag=1;
        // }
        //  else if(countb==countc && (counta==(2*countb))){
        //     flag=1;
        // }
        // else if(counta==countc && (countb==(2*counta))){
        //     flag=1;
        // }

         if(counta==countb && countc==0)flag=1;
        else if(countb==countc && counta==0)flag=1;
        else if(counta+countc==countb) flag=1;
    }
    flag==1?cout<<"YES":cout<<"NO";
    cout<<endl;
}
return 0;
}