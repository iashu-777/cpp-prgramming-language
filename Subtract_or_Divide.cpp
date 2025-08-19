#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a,b,c) for(ll i=a;i<b;i+=c)
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }

// void f(ll n,unordered_map<ll,ll>&mpp){
//     mpp[n]++;
//     if(n==1){
//         return;
//     }
//     if(n>1 && n%2==0){
//         if(mpp.find(n/2)==mpp.end())
//        f(n/2,mpp);
//     }
//     if(n>2){
//         if(mpp.find(n-2)==mpp.end())

//        f(n-2,mpp);
//     }
// }

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    unordered_map<ll,ll>mpp;
    if(n%2!=0){
        cout<<n/2+1<<endl;
    }
    else{
        if(((n/2))%2==0){

            cout<<(n/2)+(n/2)/2<<endl;
        }
        else{
            cout<<(n/2)+((n/2)/2)+1<<endl;

        }
    }

}
return 0;
}