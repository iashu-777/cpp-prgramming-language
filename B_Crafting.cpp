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
    ll n;
    cin>>n;
    vector<int>a(n);
    vector<int>b(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int flag=0;
    for(int i=0;i<n;i++){
        if(a[i]<b[i]){
            cout<<"NO"<<"\n";
            flag=1;
            break;
        }
    }
    if(flag==0) cout<<"YES"<<"\n";
 }


return 0;
}