#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a,b,c) for(ll i=a;i<b;i+=c)



int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n,m;
cin>>n>>m;
vector<ll>v1;
loop(0,n,1){
    ll x;
    cin>>x;
    v1.push_back(x);
}
vector<ll>v2;
loop(0,m,1){
    ll x;
    cin>>x;
    v2.push_back(x);
}
sort(v1.begin(),v1.end());
sort(v2.begin(),v2.end());
ll v=v1[n-1];
//1
X:
if(2*v1[0]>v){
    if(v<=v2[0]){
        v++;
        goto X;
    }
    cout<<-1<<endl;
    return 0;
}

//2
for(auto x:v2){
    if(x<=v){
        cout<<-1<<endl;
        return 0;
    }
}
cout<<v;
return 0;
}