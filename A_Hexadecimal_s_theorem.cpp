#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a,b,c) for(ll i=a;i<b;i+=c)
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
ll sum_of_digits(ll n){ ll s=0; for(;n;n/=10) s+=n%10; return s; }




int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

vector<ll>fib;
fib.push_back(-1);
fib.push_back(0);
fib.push_back(1);
ll a=0;
ll b=1;
for(ll i=3;i<=1000000000;i++){
    ll c=a+b;
    a=b;
    b=c;
    if(c>1000000000){
        break;
    }
    fib.push_back(c);
}
ll x;
cin>>x;
// for(auto x:fib){
//     cout<<x<<" ";
// }
if(x==1){
    cout<<1<<" "<<0<<" "<<0;
}
else if(x==0){
    cout<<0<<" "<<0<<" "<<0;
}
else if(x==2){
    cout<<0<<" "<<1<<" "<<1;
}
else{

    // auto k=find(fib.begin(),fib.end(),x);
    // k--;
    // ll ans1=*k;
    // k-=2;
    // ll ans2=*k;
    // k--;
    // ll ans3=*k;

    ll idx = find(fib.begin(), fib.end(), x) - fib.begin();
// idx++;
ll ans1 = fib[idx-1];
ll ans2 = fib[idx-3];
ll ans3 = fib[idx-4];
    cout<<ans1<<" "<<ans2<<" "<<ans3;
}

return 0;
}