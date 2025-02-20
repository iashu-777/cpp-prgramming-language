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
    map<ll,ll>mpp;
    loop(0,n,1){
        ll x;
        cin>>x;
        mpp[x]++;
    }
    vector<ll>a;
    vector<ll>b;
    while(mpp.size()>1){
        auto it=mpp.begin();
        ll size=it->second;
        for(ll i=1;i<=size;i++){
            a.push_back(it->first);
        }
        mpp.erase(mpp.begin());

    }
    auto it1=mpp.begin();
    ll size1=it1->second;
    for(ll i=1;i<=size1;i++){
        b.push_back(it1->first);
    }
    if(a.size()==0 || b.size()==0){
        cout<<-1;
    }
    else{
        cout<<a.size()<<" "<<b.size()<<endl;
        for(auto x:a){
            cout<<x<<" ";
        }
        cout<<endl;

        for(auto x:b){
            cout<<x<<" ";
        }
    }
    cout<<"\n";
 
}
return 0;
}