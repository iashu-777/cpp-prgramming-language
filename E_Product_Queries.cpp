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

vector<ll>a(n+1,0);
for(ll i=1;i<=n;i++){
    a[v[i-1]]=1;
}
unordered_set<ll>st;
for(ll i=1;i<a.size();i++){
    if(a[i]==1){
        st.insert(i);
    }
}
vector<ll>cc={st.begin(),st.end()};
for(ll i=1;i<=n;i++){
    if(i==1 && a[i]==1){
        continue;
    }
    if(a[i]==1){
        ll c=i;
        ll j=i;
        for(auto c:cc){
        while(j<=n){
                if(c==1)continue;
                j=j*c;
                if(j<=n && a[j]==0){
                    a[j]=a[j/c]+1;
                }
            }
        }
    }
}
for(ll i=1;i<=n;i++){
    if(a[i]==0){
        cout<<-1<<" ";
    }
    else{
        cout<<a[i]<<" ";
    }
}
cout<<endl;
}

return 0;
}