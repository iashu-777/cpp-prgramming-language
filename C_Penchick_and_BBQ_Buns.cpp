#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a,b,c) for(ll i=a;i<b;i+=c)

//making a perfect square array of multiples of perfect squares

vector<ll> sieve(ll n){
    vector<ll>perfects(n+1,0);
    for(ll i=0;i<=1000;i++){
        perfects[i*i]=1;
    }
    return perfects;
}


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    if(n%2!=0){
        cout<<-1<<endl;
    }
    else{
        loop(0,n/2,1){
            cout<<i+1<<" "<<i+1<<" ";
        }
        cout<<endl;
    }
}
return 0;
}