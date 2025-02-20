#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a,b,c) for(ll i=a;i<b;i+=c)



int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;
cin>>t;
while(t--){
ll a,b,c;
cin>>a>>b>>c;
//anna play
if(a>=c){
    if(c%2==1){
        //katie chancee
        if(a>=b){
            //anna wins
            cout<<"First";
        }
        else{
            //katie wins
            cout<<"Second";
        }
    }
    else{
        //anna chance
        if(b>=a){
            //katie wins
            cout<<"Second";
        }
        else{
            //anna wins
            cout<<"First";
        }
    }
}
else{
   cout<<"Second";
}
cout<<"\n";}
return 0;
}