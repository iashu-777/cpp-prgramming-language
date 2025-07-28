#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a,b,c) for(ll i=a;i<b;i+=c)
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }

int f(int n){
    if(n<=1)
    {
        return n;
    }
    int last=f(n-1);
    int second_last=f(n-2);
    return last+second_last;
}

int main(){

int n;
cin>>n;
cout<<f(n);
return 0;
}