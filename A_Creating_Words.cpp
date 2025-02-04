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
loop(0,n,1){
    string a;
    cin>>a;
    string b;
    cin>>b;
    swap(a[0],b[0]);
    cout<<a<<" "<<b<<"\n";
 
}
return 0;
}