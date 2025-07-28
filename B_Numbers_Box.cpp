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
    ll n,m;
    cin>>n>>m;
    ll sum=0;
    ll count_neg=0;
    priority_queue<ll,vector<ll>,greater<ll>>pq;
    vector<vector<ll>>v;
    for(ll i=0;i<n;i++){
        vector<ll>temp;
        for(ll j=0;j<m;j++){
            ll x;
            cin>>x;
            temp.push_back(x);
            sum+=abs(x);
            if(x<0)count_neg++;
            pq.push(abs(x));
        }
        v.push_back(temp);
    }
    if(count_neg%2!=0){
        sum-=(2*pq.top());
    }
    cout<<sum<<endl;


}
return 0;
}