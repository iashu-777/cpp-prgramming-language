#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a,b,c) for(ll i=a;i<b;i+=c)

ll solve(string x,string s){
    ll k=s.size();
    k=k/2;
    k++;
    ll opr=0;
    while(k--){
        if(x.find(s)!=string::npos){
            return opr;
        }
        x=x+x;
        opr++;
    }
    if(x.find(s)!=string::npos){
        return opr;
    }
    return -1;
    
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;
cin>>t;
while(t--){
    ll n,m;
    cin>>n>>m;
    string x,s;
    cin>>x;
    cin>>s;
   cout<<solve(x,s)<<endl;
}
return 0;
}