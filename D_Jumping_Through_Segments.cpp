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



bool func(vector<pair<ll,ll>>&v,ll k){
    ll cur_l = 0, cur_r = 0;
    for(size_t i = 1; i < v.size(); i++){
        // Expand the reachable range by k in both directions
        cur_l = max(cur_l - k, v[i].first);
        cur_r = min(cur_r + k, v[i].second);
        
        // If the range becomes invalid, this k is too small
        if(cur_l > cur_r) return false;
    }
    return true;
}



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
    v.push_back({0,0});
    ll maxi=INT_MIN;
    for(ll i=0;i<n;i++){
        ll a,b;
       cin>>a>>b;
        v.push_back({a,b});
        }
        ll low=maxi;
        
        ll high=(ll)1e9;
        while(low<=high){
            ll mid=low+(high-low)/2;
            if(func(v,mid)){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
       
        cout<<low<<endl;
}
return 0;
}