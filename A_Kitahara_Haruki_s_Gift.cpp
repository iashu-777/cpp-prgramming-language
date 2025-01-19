#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll c1=0;
ll c2=0;
ll sum=0;
ll t;
cin>>t;
multiset<int>mt;
if(t==1){cout<<"NO";

return 0;
}
while(t--){
    ll k;
    cin>>k;
mt.insert(k);
}

while(!mt.empty()){
    if(mt.find(200)!=mt.end()){
    mt.erase(mt.find(200));
    c1+=200;
    }
    if(mt.find(100)!=mt.end()){
    mt.erase(mt.find(100));
    c2+=100;
    }
    if(mt.find(100)!=mt.end()){
        c2+=100;
    mt.erase(mt.find(100));
    }
    
} 
if(c1==c2){
    cout<<"YES";
}else{
    cout<<"NO";
}

return 0;
}