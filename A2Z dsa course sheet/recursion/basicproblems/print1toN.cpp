#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a,b,c) for(ll i=a;i<b;i+=c)
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }

void func(int i,int n){
    if(i>n){
        return ;
    }
    else{
        cout<<i<<endl;
        func(i+1,n);
    }
}

int main(){

int n;
cin>>n;
func(1,n);

return 0;
}