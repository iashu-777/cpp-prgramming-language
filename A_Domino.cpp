#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    vector<pair<ll,ll>>vec;
    ll left_sum=0;
    ll right_sum=0;
    while(t--){
        ll a,b;
        cin>>a>>b;
        if(a%2!=0 || b%2!=0){
            left_sum+=a;
            right_sum+=b;
            vec.push_back({a,b});
        }
    }
    ll count=0;
     if(left_sum%2==0 && right_sum%2==0){
            cout<<count;
            return 0;
        }
    for(auto x:vec){
        if(x.first%2!=0 && x.second%2!=0)
        continue;
        if(x.first%2!=0 || x.second%2!=0){
            left_sum-=x.first;
            left_sum+=x.second;
            right_sum-=x.second;
            right_sum+=x.first;
            count++;
        }
        if(left_sum%2==0 && right_sum%2==0){
            cout<<count;
            return 0;
        }
    }
    if(left_sum%2==0 && right_sum%2==0){
            cout<<count;
            return 0;
        }
    cout<<-1;
    return 0;
}