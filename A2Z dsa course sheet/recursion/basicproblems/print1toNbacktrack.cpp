#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a,b,c) for(ll i=a;i<b;i+=c)
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }


//u cant use i+1 in the recursion , u can use i-1 type thing
void func(int i){
    if(i<1){
        return;
    }
    else{
        func(i-1);
        printf("%d\n",i);
    }
}
int main(){

int n;
cin>>n;
func(n);
return 0;
}