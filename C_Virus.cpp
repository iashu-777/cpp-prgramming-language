#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a,b,c) for(ll i=a;i<b;i+=c)
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
ll sum_of_digits(ll n){ ll s=0; for(;n;n/=10) s+=n%10; return s; }
vector<bool> sieve(ll n){ vector<bool> v(n+1,1); v[0]=v[1]=0; for(ll i=2;i*i<=n;i++) if(v[i]) for(ll j=i*i;j<=n;j+=i) v[j]=0; return v; }
 ll findIndex(const vector<ll>& v, ll key, ll i, ll j){ auto it=lower_bound(v.begin()+i,v.begin()+j+1,key); return (it!=v.begin()+j+1 && *it==key)? it-v.begin():-1; }
long long countDivisors(long long n){ long long c=0; for(long long i=1;i*i<=n;i++) if(n%i==0) c+=(i==n/i?1:2); return c; }
bool isPowerOftwo(ll n){ return (n > 0) && ((n & (n - 1)) == 0);}
  ll lbound(const vector<ll>& v, ll key, ll i, ll j){ return lower_bound(v.begin()+i, v.begin()+j+1, key) - (v.begin()+i); }



bool comp(const pair<ll,ll>&a,const pair<ll,ll>&b){
  if(a.first==b.first){
    return a.second<b.second;
  }
  return a.first>b.first;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll t;
cin>>t;
while(t--){
    ll n,m;
    cin>>n>>m;
    vector<ll>v(m,0);
    for(ll i=0;i<m;i++){
      cin>>v[i];
    }
    sort(v.begin(),v.end());
    vector<pair<ll,ll>>huehue;
    ll i=0;
  
    ll j=m-1;
   
    

    huehue.push_back({v[0]-1+n-v[m-1],2});

      for(ll k=i;k<j;k++){
      huehue.push_back({v[k+1]-v[k]-1,2});
    }
    sort(huehue.begin(),huehue.end(),comp);


ll daysGone=0;
ll infected=0;
ll sum=0;

for(ll i=0;i<huehue.size();i++){
  infected=daysGone*huehue[i].second;
  if(huehue[i].first>=infected){
   huehue[i].first=huehue[i].first-infected;
   daysGone+=huehue[i].second;
  }
  else{
    break;
  }
  if(huehue[i].first<=1){
   
    sum+=huehue[i].first;
    break;
  }else{
    if(huehue[i].second!=1){

      huehue[i].first-=1;
    }
    sum+=huehue[i].first;
    
  }
}
cout<<n-sum<<endl;
}
return 0;
}