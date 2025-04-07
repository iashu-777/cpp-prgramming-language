
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
for(ll j=1;j<=t;j++){
    ll n,k;
    cin>>n>>k;
    vector<ll>v;
    loop(0,n*k,1){
        ll x;
        cin>>x;
        v.push_back(x);
    }
    // if(t==100&& j==7){
    //     cout<<"Hi";
    //     cout<<n<<k;
    //     cout<<"HI";
    //     for(auto x:v){
    //         cout<<x<<" ";
    //     }
    //     cout<<"HI";
    // }
    ll sum=0;
    if(n<=2){
        for(ll i=0;i<n*k;i+=n){
            sum+=(v[i]);
        }
    }
    else{
        reverse(v.begin(),v.end());
        ll count=k;
        ll i=-1;
        while(count--){
            i=i+(n/2+1);
            sum+=(v[i]);
        }
   
    }
    cout<<sum<<endl;

}
return 0;
}