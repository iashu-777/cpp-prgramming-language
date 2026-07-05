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
    // unordered_map<ll,ll>mpp;

    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        v.push_back({x,i+1});
    }
    vector<pair<ll,ll>>q=v;
    sort(v.begin(),v.end(),greater<pair<ll,ll>>());
    vector<pair<ll,ll>>v1;
    vector<pair<ll,ll>>v2;
    for(ll i=0;i<(n/2)*2;i++){
        v1.push_back(v[i]);
        i++;
        v2.push_back(v[i]);
    }
    if(n%2==1){
        v2.push_back(v[n-1]);
    }
    // for(auto x:v2)cout<<x.first<<","<<x.second<<" ";

    // cout<<endl;


    reverse(v1.begin(),v1.end());
    vector<pair<ll,ll>>arr;
    ll m=0;
    for(;m<v1.size();m++){
        arr.push_back({v1[m].second,m+1});
    }
    arr.push_back({0,m+1});
    m++;
    ll c=m;
     for(;m<v1.size()+v2.size()+1;m++){
        arr.push_back({v2[m-c].second,m+1});
    }

    
    sort(arr.begin(),arr.end());
// for(auto x:arr){
//         cout<<x.first<<","<<x.second<<" ";
//     }
// cout<<endl;
    ll sum=0;
    for(ll i=1;i<n+1;i++){
        sum+=(2*(abs(arr[0].second-arr[i].second))*(q[i-1].first));
        // cout<<sum<<endl;
    }
    cout<<sum<<endl;
    for(auto x:arr){
        cout<<x.second<<" ";
    }
    cout<<endl;
}
return 0;
}