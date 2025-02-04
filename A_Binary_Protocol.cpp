#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a,b,c) for(ll i=a;i<b;i+=c)



int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n;
cin>>n;
string s;
cin>>s;
string ans;
    ll count=0;
for(auto x:s){
    if(x=='1'){
        count++;
    }else{
        ans+=to_string(count);
        count=0;
    }
}
ans+=to_string(count);
cout<<ans;
return 0;
}