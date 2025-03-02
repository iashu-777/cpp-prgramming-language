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
    ll x,y;
    cin>>x>>y;
    ll k=max(x,y);
    ll e=(k*k)-k+1;
    if(x==y){
        cout<<e<<endl;
    }
    else{
        if(k%2==0){
            if(x<y){
                e=e-(y-x);
            }
            else{
                e=e+(x-y);
            }

        }
        else{
                if(x>y){
                    e=e-(x-y);
                }
                else{
                    e=e+(y-x);
                }
            }
            cout<<e<<endl;
        }
    }
return 0;
}