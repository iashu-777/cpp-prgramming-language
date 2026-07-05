#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a,b,c) for(ll i=a;i<b;i+=c)
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
ll sum_of_digits(ll n){ ll s=0; for(;n;n/=10) s+=n%10; return s; }
vector<bool> sieve(ll n){ vector<bool> v(n+1,1); v[0]=v[1]=0; for(ll i=2;i*i<=n;i++) if(v[i]) for(ll j=i*i;j<=n;j+=i) v[j]=0; return v; }
 ll lbound(vector<ll>v,ll x){ ll k= lower_bound(v.begin(), v.end(), x) - v.begin();return k;}
long long countDivisors(long long n){ long long c=0; for(long long i=1;i*i<=n;i++) if(n%i==0) c+=(i==n/i?1:2); return c; }
bool isPowerOftwo(ll n){ return (n > 0) && ((n & (n - 1)) == 0);}


void insertZeroAfterOne(vector<ll>& v) {
    for (ll i = 0; i < (ll)v.size(); i++) {
        if (v[i] == 1) {
            v.insert(v.begin() + i + 1, 0);
            break; 
        }
    }
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
    for(ll i=1;i<2*n;i++){
        v.push_back({__builtin_popcountll(i),i});
    }
    sort(v.begin(), v.end(), [](auto &a, auto &b) {
    if (a.first != b.first)
        return a.first > b.first;   
    return a.second < b.second;     
});

vector<ll>temp;
for(auto x:v){
    temp.push_back(x.second);
}

insertZeroAfterOne(temp);
for(auto x:temp){
    cout<<x<<" ";
}
cout<<endl;
}
return 0;
}