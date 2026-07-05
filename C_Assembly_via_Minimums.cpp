// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define mod 998244353
// #define loop(a,b,c) for(ll i=a;i<b;i+=c)
// ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
// ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
// ll sum_of_digits(ll n){ ll s=0; for(;n;n/=10) s+=n%10; return s; }
// vector<bool> sieve(ll n){ vector<bool> v(n+1,1); v[0]=v[1]=0; for(ll i=2;i*i<=n;i++) if(v[i]) for(ll j=i*i;j<=n;j+=i) v[j]=0; return v; }
// long long countDivisors(long long n){ long long c=0; for(long long i=1;i*i<=n;i++) if(n%i==0) c+=(i==n/i?1:2); return c; }
// bool isPowerOftwo(ll n){ return (n > 0) && ((n & (n - 1)) == 0);}
//  ll findIndex(const vector<ll>& v, ll key, ll i, ll j){ auto it=lower_bound(v.begin()+i,v.begin()+j+1,key); return (it!=v.begin()+j+1 && *it==key)? it-v.begin():-1; }   
//   ll lbound(const vector<ll>& v, ll key, ll i, ll j){ return lower_bound(v.begin()+i, v.begin()+j+1, key) - (v.begin()+i); }



//----------------------my approach-----------------------

// int main(){
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
// cout.tie(NULL);
// ll t;
// cin>>t;
// while(t--){
// ll n1;
// cin>>n1;
// ll n=(n1*(n1-1))/2;
// vector<ll>v;
// for(ll i=0;i<n;i++){
// ll x;
// cin>>x;
// v.emplace_back(x);
// }
// vector<ll>ans(n1,1000000000LL);
// unordered_map<ll,ll>mpp;
// for(auto x:v){
//     mpp[x]++;
// }
// vector<pair<ll,ll>>p;
// for(auto x:mpp){
//     // ans[x.second]=x.first;
//     p.push_back({x.second,x.first});
// }
// sort(p.begin(),p.end(),greater<pair<ll,ll>>());

// for(ll i=0;i<p.size();i++){
//     ans[n1-i-1]=p[i].second;
// }
// ll k=1;
// for(ll i=n1-1;i>=1;i--){
//     if(ans[i]==1000000000LL){
//         ans[i]=ans[n1-k];
//         k++;
//     }
// }
// for(auto x:ans){
//     cout<<x<<" ";
// }
// cout<<"\n";
// }

// return 0;
// }

//--------------editorial approach----------------------------------

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int m=n*(n-1)/2,b[m];
        for(int i=0;i<m;i++)cin>>b[i];
        sort(b,b+m);
        for(int i=0;i<m;i+=--n)cout<<b[i]<<' ';
        cout<<"1000000000\n";
    }
}