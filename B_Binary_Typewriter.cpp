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
    string s;
    cin>>s;
    ll count=0;
    ll flag=0;
    ll count_0=0;
    for(auto x:s){
        if(x=='0')
        count_0++;
    }
    for(ll i=1;i<n-1;i++){
        if(s[i-1]!=s[i]){
            count++;
        }
        if(s[i]=='0' && s[i+1]=='1'){
            flag=1;
        }
    }
    if(s[n-2]!=s[n-1]){
        count++;
    }
    if(count_0==0){
        count++;
    }
        cout<<count+n-flag<<endl;
    
}
return 0;
}