#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    int ans=1;
    cin>>n>>m;
    if(m==n){
        ans=(n/2)+(n%2);
        while(ans%m!=0){
            ans++;
        }
        cout<<ans;
    }
    else if(m>(n/2+1)){
        cout<<-1;
    }
    else{
        ans=(n/2)+(n%2);
        while(ans%m!=0){
            ans++;
        }
        cout<<ans;

    }
    return 0;
}