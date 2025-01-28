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
    vector<ll>a;
    vector<ll>b;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        a.push_back(x);
    }
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        b.push_back(x);
    }
    if((a[0]==b[0])&&(a[n-1]==b[n-1])){
        cout<<"Alice"<<"\n";
    }
    else if(((a[0]==b[0])||(a[0]==b[n-1])) &&((a[n-1]==b[0])||(a[n-1]==b[n-1]))){
        cout<<"Bob"<<"\n";
    }
    else{
        cout<<"Alice"<<"\n";
    }
 
}
return 0;
}