#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n>=22 || n<=10){
        cout<<0;
        return 0;
    }
    if(n>=11 && n<=19){
        cout<<4;
        return 0;
    }
    if(n==20){
        cout<<15;
        return 0;
    }
    if(n==21){
        cout<<4;
        return 0;
    }

}