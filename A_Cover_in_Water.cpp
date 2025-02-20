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
    string s;
    cin>>s;
    ll flag=0;
    ll count=0;
    for(auto x:s){
        if(x=='.'){
            count++;
        }
    }
    for(ll i=0;i<n-2;i++){
        
        if(s[i]=='.' && s[i+1]=='.' && s[i+2]=='.'){
            flag=1;
        }
    }
    if(flag==0){
        cout<<count;
    }else{
        cout<<2;
    }
    cout<<"\n";
 
}
return 0;
}