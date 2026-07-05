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
    ll n,m;
    cin>>n>>m;
    ll f=0;
    vector<vector<ll>>v;
    unordered_map<ll,ll>mpp;
    // unordered_map<ll,ll>mpp2;
    for(ll i=0;i<n;i++){
        ll l;
        cin>>l;
        vector<ll>temp;
        for(ll j=0;j<l;j++){
            ll x;
            cin>>x;
            mpp[x]++;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    // mpp2=mpp;
    ll count=0;
    for(ll i=0;i<v.size();i++){
        vector<ll>tempi;
        for(ll j=0;j<v[i].size();j++){
            mpp[v[i][j]]--;
            tempi.push_back(v[i][j]);
            if(mpp[v[i][j]]==0)
            mpp.erase(v[i][j]);
        }
        if(mpp.size()==m){
            count++;
        }
        // mpp=mpp2;
        for(auto x:tempi){
            mpp[x]++;
        }
    }
    if(count>=2)cout<<"YES";
    else cout<<"NO";
    cout<<endl;
   
}
return 0;
}