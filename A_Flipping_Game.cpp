#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a,b,c) for(ll i=a;i<b;i+=c)



int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    ll n;
    cin>>n;
    vector<ll>v;
    ll zero=0;
    ll ones=0;
    loop(0,n,1){
        ll x;
        cin>>x;
        v.push_back(x);
        if(x==0)zero++;
        else ones++;
    }
    ll maxi=0;
    ll count_zeros=0;
    ll count_ones=0;
    loop(0,n,1){
        count_zeros=0;
        count_ones=0;
        if(v[i]==1)count_ones++;
        else count_zeros++;
        for(ll j=i+1;j<n;j++){
            if(v[j]==1)count_ones++;
            else count_zeros++;
            maxi=max(maxi,(count_zeros+ones-count_ones));
        }
        
    }
            maxi=max(maxi,(count_zeros+ones-count_ones));

    cout<<maxi;
return 0;
}