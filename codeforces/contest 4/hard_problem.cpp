#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int m,a,b,c;
        cin>>m>>a>>b>>c;
        int ans=0;
        int v1=0,v2=0;
        ans+=min(m,a);
        if(m>a)
        v1=m-a;
        ans+=min(m,b);
        if(m>b)
        v2=m-b;
        if(v1>0){
            ans+=(min(v1,c));
        c=c-v1;
        }
        if(c>0){
           if(v2>0){
            ans+=(min(v2,c));
        c=c-v2;
        } 
        }
        cout<<ans<<endl;
    }
}