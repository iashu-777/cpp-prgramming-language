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
    vector<ll>v;
    vector<ll>prefix;
    string s;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        v.push_back(x);
    }
    cin>>s;
    ll pre=0;
    for(ll i=0;i<n;i++){
        pre+=v[i];
        prefix.push_back(pre);
    }
    ll i=0;
    ll j=n-1;
    ll sum=0;
    if(s[0]=='L'&& s[n-1]=='R'){
        sum+=prefix[n-1];
        i++;
        j--;
    }
    while(i<j){
        if(s[i]=='L' && s[j]=='R'){
            if(i-1<0){
                // sum+=(prefix[j]-prefix[i]);
                sum+=prefix[j];
            }else{
            sum+=(prefix[j]-prefix[i-1]);
            }
            j--;
            i++;
        }
        while(i<n&&s[i]!='L'){
            i++;
        }
        while(j>=0&&s[j]!='R'){
            j--;
        }
    }
    cout<<sum<<"\n";
}
return 0;
}