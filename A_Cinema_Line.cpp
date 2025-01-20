#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a,b,c) for(ll i=a;i<b;i+=c)



int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n;
cin>>n;
vector<ll>v;
ll c25=0;
ll c50=0;
ll c100=0;
loop(0,n,1){
    ll x;
    cin>>x;
    if(x==25)c25++;
    else if(x==50){
        if(c25>=1){
            c25--;
            c50++;
        }
        else{
            cout<<"NO";
            return 0;
        }
    }
    else if(x==100){
        if(c50>=1 && c25>=1){
            c50--;
            c25--;
            c100++;
        }
        else if(c25>=3){
            c25-=3;
            c100++;
        }
        else{
            cout<<"NO";
            return 0;
        }
    }
}
cout<<"YES";
return 0;
}
