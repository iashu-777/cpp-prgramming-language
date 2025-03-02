#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a,b,c) for(ll i=a;i<b;i+=c)
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }



int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    vector<ll>v;
    unordered_map<ll,ll>mpp;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        v.push_back(x);
        mpp[x]++;
    }
    ll flag=0;
    if(mpp.size()<=1){
        flag=1;
    }
    if(flag==1){
        cout<<"NO";
    }else{
        cout<<"YES";
        cout<<endl;
        sort(v.begin(),v.end());
        swap(v[1],v[n-1]);
        
        for(auto x:v){
            cout<<x<<" ";
        }
    }
    cout<<endl;
 
}
return 0;
}