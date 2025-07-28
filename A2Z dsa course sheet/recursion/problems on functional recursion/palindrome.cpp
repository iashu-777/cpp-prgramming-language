#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a,b,c) for(ll i=a;i<b;i+=c)
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }


bool palin(string s,int i,int j){
    if(i>=j){
        return true;
    }
    else if(s[i]!=s[j]){
        return false;
    }
    else{
        return palin(s,i+1,j-1);
    }
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
string s="madama";
cout<<palin(s,0,s.size()-1);
return 0;
}