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
    ll x,y,a;
    cin>>x>>y>>a;
    if(x==a){
        cout<<"YES";
    }else{
    ll p=a%(x+y);
    if(x+y>(a+0.5)){
        //b wins
        if(x>=(p+0.5)){
            //b
            cout<<"NO";
        }else
        cout<<"YES";
    }
    
    else if(x>=(p+0.5)){
        //b
        cout<<"NO";
    }
    // else if(y>=(p+0.5)){
    //     cout<<"NO";
    // }
    else{
        
        //k
        cout<<"YES";
       }   }
    cout<<endl;
    
}
return 0;
}