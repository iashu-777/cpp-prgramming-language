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
    string s;
    cin>>s;
    ll n=s.size();
ll flag=0;
    for(ll i=0;i<s.size()-1;i++){
        if(s[i]==s[i+1]){
            flag=1;
            break;
        }
    }
flag?cout<<1:cout<<s.size();
cout<<endl;
}
return 0;
}