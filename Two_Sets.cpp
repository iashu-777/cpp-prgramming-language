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
ll n;
cin>>n;
vector<ll>v;
ll ch=(n*(n+1))/2;
if(ch%2==0){
    cout<<"YES"<<endl;
    if(n%2==0){
        // cout<<n/2<<endl;
        for(ll i=0;i<n/4;i++){
            // cout<<i+1<<" ";
            // cout<<n-i<<" ";
            v.push_back(i+1);
            v.push_back(n-i);
        }
        cout<<v.size()<<endl;
        for(auto x:v){
            cout<<x<<" ";
        }
        v.clear();
        cout<<endl;
        // cout<<n/2<<endl;
        ll count=n/2;
        for(ll i=(n/4)+1;count--;i++){
            // cout<<i<<" ";
            v.push_back(i);
        }
        cout<<v.size()<<endl;
        for(auto x:v){
            cout<<x<<" ";
        }
        v.clear();

    }
    else{
        // cout<<(n/2)+1<<endl;
        for(ll i=3;i<=n;){
            // cout<<i<<" ";
            v.push_back(i);
            if(i+1<=n)
            // cout<<i+1<<" ";
            v.push_back(i+1);
            i+=4;
        }
        cout<<v.size()<<endl;
        for(auto x:v){
            cout<<x<<" ";
        }
        v.clear();
        cout<<endl;
        // cout<<n/2<<endl;
        for(ll i=1;i<=n;){
            // cout<<i<<" ";
            v.push_back(i);
            if(i+1<=n)
            // cout<<i+1<<" ";
            v.push_back(i+1);
            i+=4;
        }
        cout<<v.size()<<endl;
        for(auto x:v){
            cout<<x<<" ";
        }
        v.clear();
    }
}
else{
    cout<<"NO"<<endl;
 
}
return 0;
}