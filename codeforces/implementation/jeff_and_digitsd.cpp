#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    string ans;
    cin>>t;
    int count=0;
    int co=0;
    while(t--){
        int k;
        cin>>k;
        if(k==5)
        count++;
        else
        co++;
    }
    if(co==0){
        cout<<-1;
        return 0;
    }
    int rep=0;
    if(count>=9){
        rep=count/9;
        rep=rep*9;
        while(rep--){
            ans+='5';
        }
        while(co--){
            ans+='0';
        }
        cout<<ans;
    }
    else{
        cout<<0;
    }
    return 0;
}