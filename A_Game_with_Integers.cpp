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
    ll n;
    cin>>n;
    if(n%3==0){
        cout<<"Second";
    }
    else{
        cout<<"First";
    }
    cout<<"\n";
 
}
return 0;
}