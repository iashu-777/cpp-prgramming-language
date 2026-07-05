#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a,b,c) for(ll i=a;i<b;i+=c)
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
ll sum_of_digits(ll n){ ll s=0; for(;n;n/=10) s+=n%10; return s; }
vector<bool> sieve(ll n){ vector<bool> v(n+1,1); v[0]=v[1]=0; for(ll i=2;i*i<=n;i++) if(v[i]) for(ll j=i*i;j<=n;j+=i) v[j]=0; return v; }
long long countDivisors(long long n){ long long c=0; for(long long i=1;i*i<=n;i++) if(n%i==0) c+=(i==n/i?1:2); return c; }
bool isPowerOftwo(ll n){ return (n > 0) && ((n & (n - 1)) == 0);}
 ll findIndex(const vector<ll>& v, ll key, ll i, ll j){ auto it=lower_bound(v.begin()+i,v.begin()+j+1,key); return (it!=v.begin()+j+1 && *it==key)? it-v.begin():-1; }   





int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll t;
cin>>t;
while(t--){
ll n;
cin>>n;
vector<pair<ll,ll>>v;
vector<ll>v1;
ll flag=0;
for(ll i=0;i<n;i++){
ll x;
cin>>x;
if(x!=0)flag=1;
v.push_back({x,i});
v1.push_back(x);
}


if(flag==0){
    cout<<-1;
}
else{
    sort(v.begin(),v.end());
    ll a=v[n-1].second;
    ll b=v[n-2].second;
    ll c=v[n-3].second;

    if((v1[a]+v1[b])!=v1[c]){
        cout<<a+1<<" "<<b+1<<" "<<c+1;
    }
   else if((v1[a]+v1[c])!=v1[b]){
        cout<<a+1<<" "<<c+1<<" "<<b+1;
    }
    else{
        cout<<b+1<<" "<<c+1<<" "<<a+1;
    }
    
    
}
cout<<endl;
}

return 0;
}