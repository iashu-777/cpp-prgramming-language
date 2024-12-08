#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int count=0;
    if(m==n){
        cout<<0;
        return 0;
    }
    else if(m<n*2 || m%n!=0){
        cout<<-1;
        return 0;
    }
    else{
        int k=m/n;
        while(k!=1){
            if(k%2==0){
                k=k/2;
            }
            else if(k%3==0){
                k=k/3;
            }
            else{
                cout<<-1;
                return 0;
            }
            count++;
        }
    }
    cout<<count;
    return 0;
}