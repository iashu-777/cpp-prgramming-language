#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a,b,c) for(ll i=a;i<b;i+=c)



int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
string a,b;
cin>>a>>b;
ll n=a.size();
ll n1=b.size();
if(n!=n1){
    cout<<"NO";
    return 0;
}
// sort(a.begin(),a.end());
// sort(b.begin(),b.end());
ll count=0;
unordered_set<char>st;
for(ll i=0;i<n;i++){
    if(a[i]!=b[i]){
        count++;
        st.insert(a[i]);
        st.insert(b[i]);
    }
}
if((count==2 && st.size()==2) || count==0)cout<<"YES";

else cout<<"NO";
    
return 0;
}