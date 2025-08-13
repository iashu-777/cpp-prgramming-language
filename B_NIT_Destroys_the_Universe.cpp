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
    vector<ll>v;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        v.push_back(x);
    }
    ll flag=0;
    for(ll i=0;i<n;i++){
        if(v[i]!=0){
            flag=1;
        }
    }
    ll flag1=0;
    // for(ll i=1;i<n-1;i++){
    //     if((v[i-1]!=0) && (v[i]==0) &&(v[i+1]!=0)){
    //         flag1=1;
    //         break;
    //     }
    // }
    ll flag2=0;
    for(ll i=0;i<n;){
        if(v[i]!=0){
            i++;
            while(i<n && v[i]==0){
                i++;
                flag2=1;
            }
            if(flag2==1 && i<n && v[i]!=0){
                flag1=1;
                break;
            }
        }
        else{
            i++;
        }
    }
    if(flag1==1){
        cout<<2<<endl;
    }
    else if(flag==0){
        cout<<0<<endl;
    }
    else{
        cout<<1<<endl;
    }

}
return 0;
}