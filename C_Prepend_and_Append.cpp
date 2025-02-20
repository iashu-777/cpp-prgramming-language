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
    string s;
    cin>>s;
    ll i=0,j=n-1;
    ll ans=n;
    while(i<j){
        if((s[i]=='1'&&s[j]=='0') || (s[i]=='0'&&s[j]=='1')){
            ans--;
            ans--;
            i++;
            j--;
        }
        else{
            break;
        }
    }
    cout<<ans<<endl;
}
return 0;
}