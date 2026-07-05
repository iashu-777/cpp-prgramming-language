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





int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll t;
cin>>t;
while(t--){
    ll T,H,U;
    cin>>T>>H>>U;
    ll ans=0;
    ll a=min(T,U);
    ans+=(a*4);
    T-=a;
    U-=a;

    if(T==0){
        ans+=(H+U)*3;
    }
    else if(U==0){
        ll b=min(T/2,H);
        ans+=(b*7);
        T-=(2*b);
        H-=(b);

        if(T==0){
            ans+=(3*H);
        }
        else if(H==0){
            if(T>0){
                ans+=3;
                T--;
                ans+=(T*2);
            }
            
        }
        else if(T>0 && H>0){
            ll c=min(T,H);
            T-=c;
            H-=c;
            ans+=(5*c);
            if(T==0){
                ans+=(H*3);
            }
            else if(H==0){
                ans+=(T*3);
            }
        }
    }
    cout<<ans<<endl;
}
return 0;
}