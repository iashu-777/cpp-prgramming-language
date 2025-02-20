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
    ll n,k;
    cin>>n>>k;
    vector<ll>v;
    for(ll i=0;i<n;i++){
        ll temp;
        cin>>temp;
        v.push_back(temp);
    }
    ll flag=0;
    for(auto x:v){
        if(x==k){
            flag=1;
            cout<<"YES";
            break;
        }
    }
    if(flag==0){
        cout<<"NO";
    }
    cout<<"\n";
 
}
return 0;
}