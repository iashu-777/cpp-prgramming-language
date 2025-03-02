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
ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    ll count=0;
    ll maxi=1;
    for(ll i=1;i<=(n)/2;i++){
        if(n%i==0){
            count++;
        }
        else{
            i=i+i;
            i--;
            maxi=max(maxi,count);
            count=0;
        }
    }
    maxi=max(maxi,count);

   if(n==2){
    cout<<2<<endl;
   }
else
    cout<<maxi<<endl;
}
return 0;
}