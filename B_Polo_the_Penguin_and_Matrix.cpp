#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a,b,c) for(ll i=a;i<b;i+=c)



int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n,m,d;
cin>>n>>m>>d;
vector<ll>v;
for(ll i=0;i<n;i++){
    for(ll j=0;j<m;j++){
        ll x;
        cin>>x;
        v.push_back(x);
    }
}
sort(v.begin(),v.end());
ll moves=0;
ll mini=INT_MAX;
for(ll i=0;i<n*m;i++){
    moves=0;
    for(ll j=0;j<n*m;j++){
        if(abs(v[i]-v[j])%d!=0){
            cout<<-1;
            return 0;
        }
        else{
            moves+=(abs(v[i]-v[j])/d);
        }
    }
    mini=min(moves,mini);

}
cout<<mini;


return 0;
}