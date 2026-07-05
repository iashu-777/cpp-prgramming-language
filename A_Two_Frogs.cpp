#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;
cin>>t;
while(t--){
    ll n,a,b;
    cin>>n>>a>>b;
    if((abs(a-b)-1)%2==0){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
    cout<<endl;
}
return 0;
}