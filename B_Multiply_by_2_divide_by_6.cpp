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
    ll ans=0;
    if(n==1){
        ans=0;
    }
    else if(n==2){
        ans=-1;
    }
    else if(n==3){
        ans=2;
    }
    else{
        ll a=__builtin_popcountll(n);
        if(a==1){
            ans=-1;
        }
        else if((n%6!=0)&&(n%6!=3)||n/6==2){
                ans=-1;
            }
        
        else{
            ll n1=n;
            ll count=0;
            // while(n1!=1){
            //     if(n1%6==0){  
            //         n1=n1/6;
            //         count++;
            //     }
            //     else{
            //         n1=n1*2;
            //         count++;    
            //     }
            // }
            // logb(x) = loge(x) / loge(b)
            ans=log(n)/log(6);
        }
        
    }
    cout<<ans<<"\n";
 
}
return 0;
}