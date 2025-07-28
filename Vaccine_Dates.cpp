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
while(t--)
{
    ll d,l,r;
    cin>>d>>l>>r;
    if(d<l){
        cout<<"Too Early";
    }
    else{
        if(d>=l&& d>=r){
            cout<<"Too Late";
        }
        else{
            cout<<"Take second dose now";
        }
    }
    cout<<endl;
}
return 0;
}