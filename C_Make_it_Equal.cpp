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
    ll n,k;
    cin>>n>>k;
    vector<ll>s;
    vector<ll>t;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        s.push_back(x);
    }
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        t.push_back(x);
    }
    for(ll i=0;i<n;i++){
        s[i]=s[i]%k;
        s[i]=min(s[i],k-s[i]);
    }
    for(ll i=0;i<n;i++){
        t[i]=t[i]%k;
        t[i]=min(t[i],k-t[i]);
    }
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    cout<<endl;
}
return 0;
}