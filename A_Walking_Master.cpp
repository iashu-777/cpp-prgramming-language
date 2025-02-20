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
    ll x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    ll d;
    d=abs(y2-y1);
    x1+=d;
    y1+=d;
    if(x2>x1 || y2<y1){
        cout<<-1;
    }
    else{
        cout<<d+abs(x2-x1);
    }
    cout<<"\n";
 
}
return 0;
}