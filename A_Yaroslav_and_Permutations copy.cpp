#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a,b) for(ll i=a;i<b;i++)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    unordered_set<int> st;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        st.insert(x);
    }
    if(n==2){
        if(st.size()==2){
            cout<<"YES";
        }else cout<<"NO";
    }
    else{
        if(st.size()>=n/2){
            cout<<"YES";
        }else cout<<"NO";
    }
    return 0;
}