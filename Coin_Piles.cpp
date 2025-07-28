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
    ll a,b;
    cin>>a>>b;
    if(a==0 && b==0){
        cout<<"YES";
    }
    else if(a==0 || b==0){
        cout<<"NO";
    }
    else{

        if((a+b)%3==0){
            ll c=min(a,b);
            ll d=max(a,b);
            if(c>=d/2){
                cout<<"YES";
            }
            else{
                cout<<"NO";
            }
        }
else{
    cout<<"NO";
}
    }
    cout<<endl;
}
return 0;
}