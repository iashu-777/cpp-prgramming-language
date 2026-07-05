#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    vector<ll>v(n,0);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    unordered_map<ll,ll>mpp;
    for(auto x:v){
        mpp[x]++;
    }
    if(n%2==0){
        ll po=n/2;
         ll flag=0;
        for(auto x:mpp){
            if(x.second>po){
                flag=1;
            }
        }
        if(flag==1)
        {
            cout<<"NO";
        }
        else{
            cout<<"YES";
        }
        cout<<endl;
    }
    else{
        ll po=(n+1)/2;
        ll flag=0;
        for(auto x:mpp){
            if(x.second>po){
                flag=1;
            }
        }
        if(flag==1)
        {
            cout<<"NO";
        }
        else{
            cout<<"YES";
        }
        cout<<endl;
    }
    return 0;
}