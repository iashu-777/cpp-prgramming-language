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
bool checkKthBit(int n, int k) { int val = (1 << k); if ((n & val) != 0) { return true; } return false;}


bool calc(ll mid,vector<ll>&v,ll h){
    vector<ll>temp=v;
    ll flag=0;
    sort(temp.begin(),temp.begin()+mid,greater<ll>());
    for(ll i=0;i<mid;i++){
        if(temp[i]<=h){
            h-=temp[i];
            i++;
        }
        else{
            flag=1;
            break;
        }
    }
    return flag==0;
}


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll n,h;
cin>>n>>h;
vector<ll>v(n,0);
for(ll i=0;i<n;i++){
    cin>>v[i];
}
ll low=1;
ll high=n;
ll ans=1;
while(low<=high){
    ll mid=low+(high-low)/2;
    if(calc(mid,v,h)){
        low=mid+1;
        ans=mid;
    }
    else{
        high=mid-1;
    }
}
cout<<ans;
return 0;
}