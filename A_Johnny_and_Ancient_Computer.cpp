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
    if(a==b){
        cout<<0;
    }
    else{
       ll l=max(a,b);
        ll m=min(a,b);
        
        if(l%m!=0){
            cout<<-1;
        }
        else if((l/m)%8!=0 && (l/m)%4!=0 && (l/m)%2!=0 ){
            cout<<-1;
        }
        else{
            ll count=0;
            
            l=l/m;
            while(l%8==0 && l!=1){
                l=l/8;
                count++;
            }
            while(l%4==0 && l!=1){
                l=l/4;
                count++;
            }
            while(l%2==0 && l!=1){
                l=l/2;
                count++;
            }
            if(l==1)
            cout<<count;
            else
            cout<<-1;
        }
    }
    cout<<endl;
}
return 0;
}