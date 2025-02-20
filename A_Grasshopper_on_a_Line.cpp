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
    ll x,k;
    cin>>x>>k;
    if(x%k!=0){
        cout<<1<<endl<<x;
    }
    else{
        cout<<2;
        cout<<endl;
        cout<<1<<" "<<x-1;
    }
    cout<<endl;
}
return 0;
}