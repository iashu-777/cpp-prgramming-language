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
ll n,q;
cin>>n>>q;
string s;
cin>>s;
string t=s;
sort(t.begin(),t.end());
unordered_map<char,ll>mpp;
for(ll i=0;i<26;i++){
    mpp['a'+i]=i+1;
}
// ll k=1;
// for(auto x:t){
//     if(mpp[x]==0){
//         mpp[x]=k;
//         k++;
//     }
// }
vector<ll>v;
v.push_back(0);
ll summ=0;
for(ll i=0;i<n;i++){
    summ+=mpp[s[i]];
    v.push_back(summ);
}
for(ll i=0;i<q;i++){
    ll l,r;
    cin>>l>>r;

    cout<<v[r]-v[l-1]<<endl;
    
}
return 0;
}