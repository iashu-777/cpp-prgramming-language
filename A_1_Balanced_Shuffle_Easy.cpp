#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a,b,c) for(ll i=a;i<b;i+=c)



int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
string s;
cin>>s;
ll sum=0;
ll opening=0;
ll closing=0;
vector<pair<ll,ll>>v;
auto comp=[](pair<ll,ll>a , pair<ll,ll>b){
    //if tie then descending order
    if(a.first==b.first) return b.second<a.second;
    return a.first<b.first;
 
};
// unordered_map<ll,ll>mpp;
for(ll i=0;i<s.size();i++){
    v.push_back({(opening-closing),i+1});
    // mpp[i]=s[i];
    if(s[i]=='(')opening++;
    else closing++;
}

cout<<endl;
sort(v.begin(),v.end(),comp);

for(auto x:v){
    cout<<s[x.second-1];}

return 0;
}