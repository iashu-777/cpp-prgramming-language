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





int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll n;
cin>>n;
unordered_set<ll>st;
vector<pair<ll,ll>>v;
for(ll i=0;i<n;i++){
    ll a,b;
    cin>>a>>b;
   v.push_back({a,b});
}   
ll i=0;
sort(v.begin(),v.end());
for(auto x:v){
    ll a=x.first;
    ll b=x.second;
    if(a==0 && b==0){
        st.insert(i+1);
    }
    else{
        if(st.find(a)!=st.end() || st.find(b)!=st.end()){
            // st.insert(a);
            // st.insert(;
            // st.insert(b);
            st.insert(i+1);
        }
    }
    i++;
}
i=0;
for(auto x:v){
    ll a=x.first;
    ll b=x.second;
    if(a==0 && b==0){
        st.insert(i+1);
    }
    else{
        if(st.find(a)!=st.end() || st.find(b)!=st.end()){
            // st.insert(a);
            // st.insert(;
            // st.insert(b);
            st.insert(i+1);
        }
    }
    i++;
}
cout<<st.size();
return 0;
}