#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a,b,c) for(ll i=a;i<b;i+=c)
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }

void func(int i,int sum){
    if(i<1){
        cout<<sum;
        return ;
    }
    else{
        func(i-1,sum+i);
    }
}


int main(){
int n;
cin>>n;
func(n,0);


return 0;
}