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
    ll x,n;
    cin>>x>>n;
    if(x%2==0){
        if(n%4==0){
            cout<<x<<endl;
        }
        else if(n%4==1){
            cout<<x-1-(n/4)*4<<endl;
        }
        else if(n%4==2){
            cout<<x+1<<endl;
        }
        else if(n%4==3){
            cout<<x+4+(n/4)*4<<endl;
        }
    }
    else{
        if(n%4==0){
            cout<<x<<endl;
        }
        else if(n%4==1){
            cout<<x+1+(n/4)*4<<endl;
        }
        else if(n%4==2){
            cout<<x-1<<endl;
        }
        else if(n%4==3){
            cout<<x-4-(n/4)*4<<endl;
        }
    }
}
return 0;
}