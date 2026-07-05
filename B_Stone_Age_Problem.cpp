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
ll n,q;
cin>>n>>q;
vector<ll>v;
for(ll i=0;i<n;i++){
    ll x;
    cin>>x;
    v.push_back(x);
}
ll sum=accumulate(v.begin(),v.end(),0LL);
ll global=0;
ll count=0;

vector<pair<ll,ll>>ans;
ans.push_back({-1,-1});
for(ll i=0;i<n;i++){
    ans.push_back({v[i],0});

}
vector<ll>fi;
for(ll i=0;i<q;i++){
    ll type;
    cin>>type;
    if(type==1){
        ll pos,val;
        cin>>pos>>val;
        if(count==0){
            sum=sum-ans[pos].first+val;
            fi.push_back(sum);
            ans[pos].first=val;
        }
        else{
            if(ans[pos].second<count){
                ans[pos].first=val;
                ans[pos].second=count;
                sum=sum-global+val;
                fi.push_back(sum);
            }
            else if(ans[pos].second==count){

                

                sum=sum-ans[pos].first+val;
                ans[pos].first=val;
                fi.push_back(sum);
            }
        }
    }
    else if(type==2){
        ll val;
        cin>>val;
        global=val;
        count++;
        sum=val*n;
        fi.push_back(sum);
    }

   
    
}
for(auto x:fi){
    cout<<x<<endl;
}
return 0;
}