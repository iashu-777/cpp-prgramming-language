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
ll n;
cin>>n;
cout<<n<<" ";
while(n!=1){
    if(n%2==0){
        n=n/2;
    }
    else{
        n=n*3;
        n++;
    }
    cout<<n<<" ";
}
return 0;
}