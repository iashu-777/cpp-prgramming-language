#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a,b,c) for(ll i=a;i<b;i+=c)
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }

int func_fact(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*func_fact(n-1);
    }
}

int func_sum(int n){
    if(n==0){
        return 0;
    }
    else{
        return n+func_sum(n-1);
    }
}

int main(){
int n;
cin>>n;
cout<<(func_sum(n))<<endl;
cout<<func_fact(n);

return 0;
}