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





int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll n,k;
cin>>n>>k;
vector<string>v;
for(ll i=0;i<n;i++){
    string s;
    cin>>s;
    v.push_back(s);
}
vector<ll>ans(n+1,0);
ll globscore=0;
unordered_map<ll,ll>mpp;
for(ll i=0;i<k;i++){
    ll count1=0;
    ll count0=0;
    for(ll j=0;j<n;j++){
        if(v[j][i]=='1')count1++;
        else count0++;
    }
    if(count1==0 || count0==0){
        globscore++;
        mpp[i+1]=2;
    }
    else if(count1>count0){
        mpp[i+1]=0;
    }
    else{
        mpp[i+1]=1;
    }
}
for(ll i=0;i<k;i++){
    ll p=mpp[i+1];
    for(ll j=0;j<n;j++){
        if(p==0 && v[j][i]=='0'){
            ans[j+1]++;
        }
        else if(p==1 && v[j][i]=='1'){
            ans[j+1]++;
        }
        else if(p==2){
            ans[j+1]++;
        }
    }
    
}
ll maxi=*max_element(ans.begin()+1,ans.end());
for(ll i=1;i<=n;i++){
    if(ans[i]==maxi){
        cout<<i<<" ";
    }
}

return 0;
}