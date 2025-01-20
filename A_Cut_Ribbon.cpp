#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a,b,c) for(ll i=a;i<b;i+=c)



int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
priority_queue<ll,vector<ll>,greater<ll>>pq;
ll n,a,b,c;
cin>>n>>a>>b>>c;
pq.push(a);
pq.push(b);
pq.push(c);
ll count=0;
if(n%pq.top()==0){
    cout<<pq.top();
    return 0;
}

return 0;
}