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
    unordered_set<ll>a;
    unordered_set<ll>b;
    loop(0,n,1){
        ll x;
        cin>>x;
        a.insert(x);
    }
    loop(0,n,1){
        ll x;
        cin>>x;
        b.insert(x);
    }
    if(a.size()*b.size()>=3){
        cout<<"YES";
    }
    else
    cout<<"NO";
    cout<<"\n";
 
}
return 0;
}