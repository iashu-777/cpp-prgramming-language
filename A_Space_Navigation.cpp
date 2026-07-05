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
    ll px,py;
    cin>>px>>py;
    string s;
    cin>>s;
    unordered_map<char,ll>mpp;
    mpp['U']=0;
    mpp['R']=0;
    mpp['D']=0;
    mpp['L']=0;
    for(auto x:s){
        mpp[x]++;
    }
    ll flag=0;
    if(px>=0 && py>=0){
        if(mpp['R']>=px && mpp['U']>=py){
            flag=1;
        }
    }
   else if(px>=0 && py<=0){
        if(mpp['R']>=abs(px) && mpp['D']>=abs(py)){
            flag=1;
        }
    }
   else if(px<=0 && py>=0){
        if(mpp['L']>=abs(px) && mpp['U']>=py){
            flag=1;
        }
    }
    else if(px<=0 && py<=0){
        if(mpp['L']>=abs(px) && mpp['D']>=abs(py)){
            flag=1;
        }
    }
    if(flag==1)cout<<"YES";
    else cout<<"NO";
    cout<<endl;
}
return 0;
}