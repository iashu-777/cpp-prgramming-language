#include <bits/stdc++.h>
using namespace std;

void print1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
// * * * * * 
// * * * * * 
// * * * * * 
// * * * * * 
// * * * * * 
}
void print2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
// * 
// * * 
// * * * 
// * * * * 
// * * * * * 

}
void print3(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
// 1
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5 

}
void print4(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
// 1
// 2 2 
// 3 3 3 
// 4 4 4 4 
// 5 5 5 5 5 

}
void print5(int n){
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
// * * * * * 
// * * * * 
// * * * 
// * * 
// * 

}
void print6(int n){
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
// 1 2 3 4 5 
// 1 2 3 4 
// 1 2 3 
// 1 2 
// 1 
}
void print7(int n){
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
//     *
//    ***
//   *****
//  *******
// *********

}
int main(){
    int n;
    cin>>n;
    print7(n);

}
