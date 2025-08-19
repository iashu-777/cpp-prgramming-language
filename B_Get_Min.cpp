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
priority_queue<ll,vector<ll>,greater<ll>>pq;
while(t--){
    ll a;
    cin>>a;
    if(a==1){
        ll x;
        cin>>x;
        pq.push(x);
    }
    else{
        cout<<pq.top()<<endl;
        pq.pop();
    }
}
return 0;
}