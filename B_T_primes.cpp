#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a,b,c) for(ll i=a;i<b;i+=c)

bool isPrime(ll n){
    if(n<=1) return false;
    if(n<=3) return true;
    if(n%2==0 || n%3==0) return false;
    for(ll i=5;i*i<=n;i+=6){
        if(n%i==0 || n%(i+2)==0) return false;
    }
    return true;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n;
vector<ll>pre;
for(ll i=2;i<=1000000;i++){
    if(isPrime(i)){
        pre.push_back(i*i);
    } 
}
cin>>n;
loop(0,n,1){
    ll x;
    cin>>x;
    if(binary_search(pre.begin(),pre.end(),x)){
        cout<<"YES\n";
    }else
    cout<<"NO\n";  // else print NO if not present in pre
}
return 0;
}