#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b;
    cin>>n>>a>>b;
    if(a+b>n){
        cout<<0;
    }
    else if(a+b==n)
    cout<<b;
    else
    cout<<b+1;
    return 0;
}