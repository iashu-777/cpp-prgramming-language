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
ll t;
cin>>t;
while(t--){
    ll n,q;
    cin>>n>>q;
    vector<ll>v;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        v.push_back(x);
    }
    //creating set 
    set<pair<ll,ll>>st;
    for(ll i=0;i<n;i++){
        ll maxi=v[i];
        ll count=0;
        ll j=i;
        st.insert({i,j});
        while(j<n-1 && count<2){
            if(j<n-1 && v[j]>v[j+1]){
                count++;
            }
            if(count==2)break;
            j++;
            st.insert({i,j});
        }
    }
    for(ll i=0;i<q;i++){
        pair<ll,ll>p;
        cin>>p.first>>p.second;
        if(st.find({p.first-1,p.second-1})!=st.end()){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
        cout<<endl;
        
    }
}
return 0;
}