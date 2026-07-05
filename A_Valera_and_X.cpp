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
ll n;
cin>>n;
ll t=n;
vector<string>v;
while(t--){
    string s;
    cin>>s;
    v.push_back(s);
    
}
unordered_map<char,ll>mpp;
for(ll i=0;i<n;i++){
    for(ll j=0;j<n;j++){
        if(i==j || i+j==n-1){
            mpp[v[i][j]]++;
        }
    }
}
if(mpp.size()==1){
    for(ll i=0;i<n;i++){
    for(ll j=0;j<n;j++){
        // if(mpp.find(v[i][j])==mpp.end())
        if(v[i][j]!=v[0][0])
            mpp[v[i][j]]++;
        
    }
}
if(mpp.size()==2 &&(mpp[v[0][0]]==2*n-1) && mpp[v[0][1]]==n*n-(2*n-1)){
    cout<<"YES";
}
else{
    cout<<"NO";
}
}
else{
    cout<<"NO";
}
return 0;
}