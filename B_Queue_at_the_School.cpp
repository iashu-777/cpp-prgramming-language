#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

ll n,k;
cin>>n>>k;
string s;
cin>>s;
while(k--){
for(ll i=0;i<n-1;i++){
    if(s[i]=='B' && s[i+1]=='G'){
        swap(s[i],s[i+1]);
        i++;
    }
}
}
cout<<s;
return 0;
}