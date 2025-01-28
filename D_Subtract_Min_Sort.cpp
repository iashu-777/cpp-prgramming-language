#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a,b,c) for(ll i=a;i<b;i+=c)



int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    vector<ll> v;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        v.push_back(x);
    }
    ll j=0;
   if(v[0]>v[1])cout<<"NO";
   else if(v[0]==v[1]){
    ll i=0;
    while(i<n && v[i]==v[i+1]){
        i++;
    }
    if(v[i]>v[i+1]){
        cout<<"NO";
    }
   }
   else{
    
         if ((v[0] == 1) && (v[ 1] > v[ 2])) {
        cout << "NO" ;
    } else {
        cout << "YES";
    }
   }
   
    cout<<"\n";
} 
    

return 0;
}