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
    ll a,b,c;
    cin>>a>>b>>c;
    // if((a+b+c)%3!=0){
    //     cout<<"NO";
    // }
    // else{
    //     if(2*(b-a)<=c && ){
    //         cout<<"YES";
    //     }
    //     else{
    //         cout<<"NO";
    //     }
    // }
    if((c+b)%3==0 && (c+b+a)%3==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    cout<<endl;
}
return 0;
}