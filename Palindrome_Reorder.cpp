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





int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
string s;
cin>>s;
unordered_map<char,ll>mpp;
for(auto x:s){
    mpp[x]++;
}
ll count=0;
for(auto x:mpp){
    if(x.second%2!=0){
        count++;
    }
}
if(count<=1){
    string l,m,n;
    for(auto x:mpp){
        char c=x.first;
        ll k=x.second;
        if(x.second%2==0){
            string l1(k/2,c);
            l=l+l1;
            
            
        }
        else{
            string l2(k,c);
            m+=l2;
        }
    }
    n=l;
    reverse(n.begin(),n.end());
    cout<<l<<m<<n;
}
else{
    cout<<"NO SOLUTION";
}
return 0;
}