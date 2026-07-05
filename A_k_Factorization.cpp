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
ll n,k;
cin>>n>>k;
ll maink=k;
vector<bool>v=sieve(100000);
vector<ll>ans;
for(ll i=0;i<v.size();i++){
    if(v[i]==1){
        ans.push_back(i);
    }
}

vector<ll>finalans;
for(int i=0;i<ans.size();i++){
    if(ans[i]>n/2 || k==1)break;
    while(n%ans[i]==0){
        if(ans[i]==1)continue;
        finalans.push_back(ans[i]);
        k--;
        n=n/ans[i];
        if(k==1){
            break;
        }
    }
    
}
// cout<<k<<" ";
if(k==1){
        if(n==1)
        goto X;
    finalans.push_back(n);
    X:
    if(finalans.size()==maink){

        for(auto x:finalans){
            // if(x==1)continue;
            cout<<x<<" ";
        }
    }
    else{
        cout<<-1;
    }
}
else{
    cout<<-1;
}
return 0;
}