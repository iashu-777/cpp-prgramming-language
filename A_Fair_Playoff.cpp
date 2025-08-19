#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a,b,c) for(ll i=a;i<b;i+=c)
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }



int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;
cin>>t;
while(t--){
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    vector<ll>v;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    v.push_back(d);
    sort(v.begin(),v.end());
    ll a1=v[3];
    ll b1=v[2];
    ll flag=0;
    ll maxi1=max({a,b});
    ll maxi2=max({c,d});
    if(maxi1==a1 || maxi1==b1){
        if(maxi2==a1 || maxi2==b1){
            flag=1;
        }
    }
    if(flag==1){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
cout<<endl;
}
return 0;
}