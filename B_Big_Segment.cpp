#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a,b,c) for(ll i=a;i<b;i+=c)

bool comp(pair<ll,ll>i,pair<ll,ll>j){
    if(i.first==j.first){
        return i.second>j.second;
    }
    return i.first<j.first;
}


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n;
cin>>n;
vector<pair<ll,ll>>v;
map<pair<ll,ll>,ll>mpp;
loop(0,n,1){
    ll a,b;
    cin>>a>>b;
    v.push_back({a,b});
    mpp[{a,b}]=i+1;
}
//comparator for making second value sorted in descending order


sort(v.begin(),v.end(),comp);
ll t=v[0].second;
loop(0,n,1){
    if(v[i].second>t){
        cout<<-1;
        return 0;
    }
}
cout<<mpp[{v[0].first,v[0].second}];
return 0;
}