#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a,b,c) for(ll i=a;i<b;i+=c)

bool isPrime(ll n){
    if(n<=1) return false;
    if(n<=3) return true;
    if(n%2==0 || n%3==0) return false;
    for(ll i=5;i*i<=n;i+=6){
        if(n%i==0 || n%(i+2)==0) return false;
    }
    return true;
}