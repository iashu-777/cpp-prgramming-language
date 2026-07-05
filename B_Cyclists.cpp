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
    ll n,k,p,m;
    cin>>n>>k>>p>>m;
    
      deque<pair<ll,bool>> dq;

    for(ll i=1;i<=n;i++){
        ll x;
        cin>>x;
        if(i==p) dq.push_back({x,true});
        else dq.push_back({x,false});
    }

    ll sum=0;
    ll win=0;

    while(sum<m){

        if(p<=k){
            auto c=dq[p-1];

            if(sum + c.first > m) break;

            dq.erase(dq.begin() + (p-1));
            dq.push_back(c);

            sum+=c.first;

            if(c.second) win++;

            if(c.second) p=n;
            else p--;

        }
        else{

            ll mini=LLONG_MAX;
            ll pos=0;

            for(ll i=0;i<k;i++){
                if(dq[i].first < mini){
                    mini=dq[i].first;
                    pos=i;
                }
            }

            auto c=dq[pos];

            if(sum + c.first > m) break;

            dq.erase(dq.begin()+pos);
            dq.push_back(c);

            sum+=c.first;

            if(c.second) win++;

            if(c.second) p=n;
            else if(pos < p-1) p--;
        }
    }

    cout<<win<<endl;
}
return 0;
}