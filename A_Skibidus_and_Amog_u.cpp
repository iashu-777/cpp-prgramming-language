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
    string s;
    cin>>s;
    for(ll i=0;i<s.size()-2;i++){
        cout<<s[i];
    }
    cout<<'i';
    cout<<endl;
}
return 0;
}