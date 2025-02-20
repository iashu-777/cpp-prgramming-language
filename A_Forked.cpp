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
    map<pair<ll,ll>,ll>mpp;
    ll a,b;
    cin>>a>>b;
    ll xk,yk;
    cin>>xk>>yk;
    ll xq,yq;
    cin>>xq>>yq;
    set<pair<ll,ll>>st;
    st.insert({xk+a,yk+b});
    st.insert({xk+a,yk-b});
    st.insert({xk-a,yk+b});
    st.insert({xk-a,yk-b});
    st.insert({xk+b,yk+a});
    st.insert({xk+b,yk-a});
    st.insert({xk-b,yk+a});
    st.insert({xk-b,yk-a});

    for(auto x:st){
        mpp[x]++;
    }
st.clear();
    st.insert({xq+a,yq+b});
    st.insert({xq+a,yq-b});
    st.insert({xq-a,yq+b});
    st.insert({xq-a,yq-b});
    st.insert({xq+b,yq+a});
    st.insert({xq+b,yq-a});
    st.insert({xq-b,yq+a});
    st.insert({xq-b,yq-a});
    for(auto x:st){
        mpp[x]++;
    }
    ll count=0;
    for(auto x:mpp){
        // cout<<"{"<<x.first.first<<","<<x.first.second<<"}"<<" "<<x.second<<endl;
        // // cout<<x.first<<" "<<x.second<<endl;
        // cout<<"hi";
        if(x.second>=2){
            count++;
        }
    }
    cout<<count<<endl;
}
return 0;
}   