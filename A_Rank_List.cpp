    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long
    #define mod 998244353
    bool comp(const pair<ll,ll>&a,const pair<ll,ll>&b){
    //do first with descending orders and when first same go with ascending order
        return a.first>b.first || (a.first==b.first && a.second<b.second);  //or return a.second<b.second;
    }
    int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

        ll n,k;
        vector<pair<ll,ll>>v;
        cin>>n>>k;
        for(ll i=0;i<n;i++){
            ll a,b;
            cin>>a>>b;
            v.push_back({a,b});
        }
        sort(v.begin(),v.end(),comp);
        ll count=0;
        pair<ll,ll>ans=v[k-1];
    
        for(auto x:v){
    if(ans==x){
        count++;
    }
        }
        
    cout<<count;
    return 0;
    }   