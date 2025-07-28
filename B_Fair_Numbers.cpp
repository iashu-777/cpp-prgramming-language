#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a,b,c) for(ll i=a;i<b;i+=c)
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }

bool isFair(ll n){
    ll k=n;
    ll flag=0;
    while(k>0){
        ll rem=k%10;
        if(rem!=0){
            if(n%rem!=0){
                flag=1;
            }
        }
        k=k/10;
    }
    if(flag==0){
        return true;
    }else{
        return false;
    }
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    ll k=2520;
    while(k--){
    if(isFair(n)){
        cout<<n<<endl;
        break;
    }
    else{
        n++;
    }
}
}
return 0;
}    