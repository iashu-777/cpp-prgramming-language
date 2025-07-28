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
    string s;
    cin>>s;
    ll flag=0;
    int i;
    for( i=0;i<n-1;i++){
       int a= (int)(s[i]-s[i+1]);
       if(a>0){
        flag=1;
        break;
       }
    }
    if(flag==1){
        cout<<"YES"<<endl;
        cout<<i+1<<" "<<i+2;
    }
    else{
        cout<<"NO"<<endl;
    }

return 0;
}