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
  ll lbound(const vector<ll>& v, ll key, ll i, ll j){ return lower_bound(v.begin()+i, v.begin()+j+1, key) - (v.begin()+i); }





int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll t;
cin>>t;
while(t--){
ll n;
cin>>n;
vector<ll>v;
for(ll i=0;i<n;i++){
ll x;
cin>>x;
v.emplace_back(x);
}

vector<ll>d;
d=v;
rotate(d.begin(),d.end()-1,d.end());
// for(auto x:d)cout<<x<<" ";
// cout<<endl;
vector<ll>c;
c=d;
for(ll j=0;j<n;j++){
    c=d;
    c[j]=0;
    for(ll i=n-1;i>=0;i--){
        if(max(c[i],c[(i+1)%n])>v[i])
        {
            if(c[i]==0 ||c[(i+1)%n]==0){
                if(c[i]==0)c[(i+1)%n]=v[i];
                else c[i]=v[i];
            }
            else{

                c[i]=max(c[i],c[(i+1)%n]);
                c[(i+1)%n]=max(c[i],c[(i+1)%n]);
            }
        }
        else {
            // if(c[i]==0 ||c[(i+1)%n]==0){
            //     if(c[i]==0)c[(i+1)%n]=v[i];
            //     else c[i]=v[i];
            // }
        }
    }
    ll sum=accumulate(c.begin(),c.end(),0LL);
    cout<<sum<<" ";
    c.clear();

}
cout<<endl;
}

return 0;
}