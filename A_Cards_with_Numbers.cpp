#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//  freopen("input.txt", "r", stdin);  // Input file ko stdin se bind karte hain
//     freopen("output.txt", "w", stdout); // Output file ko stdout se bind karte hain

ll n;
cin>>n;
unordered_map<ll,vector<ll>>mpp;

vector<pair<ll,ll>>ans;
for(ll i=0;i<2*n;i++){
ll k;
cin>>k;
    mpp[k].push_back(i+1);
}
for(auto x:mpp){
    if(x.second.size()%2!=0){
        cout<<-1<<endl;
        return 0;
    }
    for(ll a=0;a<x.second.size()-1;a+=2){
        ans.push_back({x.second[a],x.second[a+1]});
    }
}
for(auto x:ans){
    cout<<x.first<<" "<<x.second<<endl;
 
}
return 0;
}