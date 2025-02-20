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
    ll n,k,x;
    cin>>n>>k>>x;
    vector<ll> v;
    ll flag=0;
    if(x!=1){
        for(ll i=0;i<n;i++){
            v.push_back(1);
        }
    }
    else if(k==1){
        // cout<<"NO";
        flag=1;
    }
    else if(k==2){
        if(n%2==0){
            for(ll i=0;i<n/2;i++){
                v.push_back(2);
            }
        }
        else{
            // cout<<"NO";
            flag=1;
        }
    }
    else{
        if(n%2==0){
            v.push_back(2);
        }
        else{
            v.push_back(3);
        }
        for(ll i=0;i<(n/2)-1;i++){
            v.push_back(2);
        }
    }
    if(flag==0){
        cout<<"YES";
        cout<<endl;
        cout<<v.size()<<endl;
        for(auto x:v){
            cout<<x<<" ";
        }
    }
    else{
        cout<<"NO";
    }
    cout<<endl;
 
}
return 0;
}