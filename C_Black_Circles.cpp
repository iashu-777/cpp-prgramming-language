#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a,b,c) for(ll i=a;i<b;i+=c)

long double dist(pair<ll,ll>a,pair<ll,ll>b){
   return sqrtl(abs(a.first-b.first)*abs(a.first-b.first)+abs(a.second-b.second)*abs(a.second-b.second));
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    vector<pair<ll,ll>>pa;
    loop(0,n,1) {
        ll a,b;
        cin>>a>>b;
        pa.push_back({a,b});
    }
    ll xs,ys,xe,ye;
    ll flag=0;
    cin>>xs>>ys>>xe>>ye;
    for(auto x:pa){
        if(dist({xs,ys},{xe,ye})>=dist(x,{xe,ye})){
            cout<<"NO"<<"\n";
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<"YES"<<"\n";
    }
}
return 0;
}