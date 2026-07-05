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

vector<ll> part1, part2;
vector<vector<ll>> adj;
vector<ll> color;
void dfs(ll node, ll col)
{
    color[node] = col;

    if(col == 0)
        part1.push_back(node);
    else
        part2.push_back(node);

    for(auto child : adj[node])
    {
        if(color[child] == -1)
            dfs(child, col ^ 1);
    }
}

void bipartite_sets(ll n, vector<pair<ll,ll>>& edges)
{
    adj.assign(n + 1, {});
    color.assign(n + 1, -1);

    for(auto x : edges)
    {
        ll u=x.first;
        ll v=x.second;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(1, 0);
}


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll n;
cin>>n;
vector<pair<ll,ll>>pairs;
for(ll i=0;i<n-1;i++){
    ll x,y;
    cin>>x>>y;
    pairs.push_back({min(x,y),max(x,y)});
}


bipartite_sets(n, pairs);

cout<<part1.size()*part2.size()-(n-1);
return 0;
}