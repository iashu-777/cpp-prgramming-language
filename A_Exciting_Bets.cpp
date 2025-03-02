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
    ll a,b;
    cin>>a>>b;
    pair<ll,ll>p;
    if(a==b){
        p.first=0;
        p.second=0;
    }
    else{
        ll diff=abs(a-b);
        p.first=diff;
      
        if(a%diff==0){
            p.second=0;
        }
        else if(a%b==0 || b%a==0){
            p.second=min(a,b);
        }
        else if(a==2 || b==2){
            p.first=max(a,b)-1;
            p.second=1;
        }else{
            p.second=abs(diff-(p.first));
        }
    }
    cout<<p.first<<" "<<p.second<<endl;
 
}
return 0;
}