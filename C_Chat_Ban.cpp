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


ll calc(ll mid,ll k){
    ll p=mid/(2*k-1);
    ll ext=k*k*p;
    ll rem=mid%(2*k-1);
    ll sum=0;
    if(rem>k){
        ll n=rem-k;
        ll ft=k-1;
        sum=((n*((2*ft)+(1-n)))/2)+((k*(k+1))/2);
    }
    else{
        sum=(rem*(rem+1))/2;
    }
    return ext+sum;
}



int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll t;
cin>>t;
while(t--){
    ll k,x;
    cin>>k>>x;
    ll low=1;
    ll high=2*k-1;

    while(low<=high){
        ll mid=low+(high-low)/2;
        ll c=calc(mid,k);
        if(x==c){
            low=mid;
            break;
        }
        
        else if(c<x){
            low=mid+1;

        }
        else{
            high=mid-1;
        }
    }
    if(low>=2*k-1){
        cout<<high<<endl;
    }else
    cout<<low<<endl;
}
return 0;
}