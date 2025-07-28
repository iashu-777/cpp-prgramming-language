#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a,b,c) for(ll i=a;i<b;i+=c)
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }

void func(int n){
    if(n==0){
        return;
    }
    else{
        cout<<("Ashish\n");
        func(n-1);
    }
}

int main(){

int n;
cin>>n;
func(n);
return 0;
}   