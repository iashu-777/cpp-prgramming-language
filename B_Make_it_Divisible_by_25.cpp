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
for(ll j=1;j<=t;j++){
    ll n;
    cin>>n;
    // if(t==10000 && j==215){
    //     cout<<"hi"<<n<<"hi";
    // }
    string s=to_string(n);
    ll k=s.size();
    ll ans=0;
    ll mini=INT_MAX;
    if(n%25==0){
        mini=0;
    }else{
    if(s.rfind('5')!=string::npos && s.rfind('2',s.rfind('5')-1)!=string::npos){
        if(s.rfind('5')==s.rfind('2',s.rfind('5')-1)+1){
            ans=k-(s.rfind('5')+1);
        }
        else {
            ans=(s.rfind('5')-s.rfind('2',s.rfind('5')-1)-1)+k-(s.rfind('5')+1);
        }
        mini=min(ans,mini);
    }
    if(s.rfind('0')!=string::npos && s.rfind('0',s.rfind('0')-1)!=string::npos){
        if(s.rfind('0')==s.rfind('0',s.rfind('0')-1)+1){
            ans=k-(s.rfind('0')+1);
        }
        else {
            ans=(s.rfind('0')-s.rfind('0',s.rfind('0')-1)-1)+k-(s.rfind('0')+1);
        }
        mini=min(ans,mini);
    }

    if(s.rfind('0')!=string::npos && s.rfind('5',s.rfind('0')-1)!=string::npos){
        if(s.rfind('0')==s.rfind('5',s.rfind('0')-1)+1){
            ans=k-(s.rfind('0')+1);
        }
        else {
            ans=(s.rfind('0')-s.rfind('5',s.rfind('0')-1)-1)+k-(s.rfind('0')+1);
        }
        mini=min(ans,mini);
    }

    if(s.rfind('5')!=string::npos && s.rfind('7',s.rfind('5')-1)!=string::npos){
        if(s.rfind('5')==s.rfind('7',s.rfind('5')-1)+1){
            ans=k-(s.rfind('5')+1);
        }
        else {
            ans=(s.rfind('5')-s.rfind('7',s.rfind('5')-1)-1)+k-(s.rfind('5')+1);
        }
        mini=min(ans,mini);
    }
    }
    cout<<mini<<'\n';

}
return 0;
}