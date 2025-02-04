#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a,b,c) for(ll i=a;i<b;i+=c)



int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
string s;
string t;
string ans;
cin>>s>>t>>ans;
unordered_map<char,char>mpp;
for(ll i=0;i<26;i++){
    mpp[s[i]]=t[i];
    mpp[s[i]-32]=t[i]-32;
}
for(auto x:ans){
    if(x>='0' && x<='9'){
        cout<<x;
    }else
    cout<<mpp[x];
}

return 0;
}