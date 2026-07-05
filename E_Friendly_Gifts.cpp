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




#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

ll t;
cin>>t;

while(t--){

    ll n;
    cin>>n;

    vector<ll>v(n);
    for(auto &x:v) cin>>x;

    ll m=n/2;

    vector<vector<ll>>mnpos(n+2,vector<ll>(m+2,1e9));
    vector<vector<ll>>mxpos(n+2,vector<ll>(m+2,-1));

    vector<ll>vis(n+1,0);

    ll timer=0;

    for(ll i=0;i<n;i++){
        timer++;

        ll mn=v[i],mx=v[i];

        for(ll j=i;j<n;j++){

            if(vis[v[j]]==timer) break;

            vis[v[j]]=timer;

            mn=min(mn,v[j]);
            mx=max(mx,v[j]);

            ll len=j-i+1;

            if(mx-mn==len-1 && len<=m){
                mnpos[mn][len]=min(mnpos[mn][len],i);
                mxpos[mn][len]=max(mxpos[mn][len],i);
            }
        }
    }

    ll ans=0;

    for(ll len=m;len>=1;len--){
        bool flag=false;

        for(ll x=1;x+len<=n+1;x++){

            if(mnpos[x][len]==1e9 || mnpos[x+len][len]==1e9)
                continue;

            if(mxpos[x][len]-mnpos[x+len][len]>=len ||
               mxpos[x+len][len]-mnpos[x][len]>=len){
                ans=len;
                flag=true;
                break;
            }
        }

        if(flag) break;
    }

    cout<<ans<<endl;
}

return 0;
}