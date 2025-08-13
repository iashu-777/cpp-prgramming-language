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
string s;
getline(cin,s);
ll ans=0;
stringstream x(s);
string temp;
x>>temp;
ll a=stoll(temp);
x>>temp;
string ope=temp;
x>>temp;
ll b=stoll(temp);
x>>temp;
x>>temp;
ans=stoll(temp);
ll tempans=0;
if(ope=="+"){
    tempans=a+b;
}
else if(ope=="-"){
    tempans=a-b;
}
else if(ope=="*"){
    tempans=a*b;
}
if(tempans==ans){
    cout<<"Yes";
}
else{
    cout<<tempans; 
}
cout<<endl;

return 0;
}