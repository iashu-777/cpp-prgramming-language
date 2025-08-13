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
    string s;
    cin>>s;
    ll count=0;
    while(1){

        if(s.find("01")!=string::npos ){
            count++;
            s.erase(s.find("01"),2);       
        }
        else if( s.find("10")!=string::npos){
            count++;
            s.erase(s.find("10"),2);
        }
        else{
            break;
        }
    }
    if(count%2==0){
        cout<<"NET"<<endl;
    }
    else{
        cout<<"DA"<<endl;
    }

}
return 0;
}