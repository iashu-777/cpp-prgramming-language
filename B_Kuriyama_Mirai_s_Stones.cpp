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
vector<ll>v;
loop(0,n,1){
    ll x;
    cin>>x;
    v.push_back(x);
}
vector<ll>pref1;
vector<ll>pref2;
ll prefix1=0;
loop(0,n,1){
    prefix1+=(v[i]);
    pref1.push_back(prefix1);
}
sort(v.begin(),v.end());
prefix1=0;
loop(0,n,1){
    prefix1+=(v[i]);
    pref2.push_back(prefix1);
}
ll m;
cin>>m;
loop(0,m,1){
    ll type,l,r;
    cin>>type>>l>>r;
    if(type==1){
        if(l==1)
        cout<<pref1[r-1];
        else
        cout<<pref1[(r-1)]-pref1[(l-2)];
    }
    else{
        if(l==1)
        cout<<pref2[r-1];
        else
        cout<<pref2[(r-1)]-pref2[(l-2)];
    }
    cout<<endl;
}
return 0;
}