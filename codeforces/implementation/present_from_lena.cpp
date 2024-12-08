#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            cout<<"  ";
        }
        int t=i-1;
        if(t==-1) t=0;
        for(int j=1;j<=(2*(i+1)-1);j++){

            if(j-1-i>0){
                if(j==(2*(i+1)-1)){
                    cout<<t;
                    break;
                }
                cout<<t<<" ";
                t--;
            }
            else{
                if(j==(2*(i+1)-1)){
                    cout<<t;
                    break;
                }
            cout<<j-1<<" ";
            }
        }
        cout<<endl;
    }
    for(int i=n-1;i>=0;i--){
        for(int k=1;k<=n-i;k++){
            cout<<"  ";
        }
        int t=i-1;
        if(t==-1) t=0;

        for(int j=1;j<=(2*(i+1)-1);j++){
            if(j-1-i>0){
                if(j==(2*(i+1)-1)){
                    cout<<t;
                    break;
                }
                cout<<t<<" ";
                t--;
            }
            else{
                if(j==(2*(i+1)-1)){
                    cout<<t;
                    break;
                }
            cout<<j-1<<" ";
            }
        }
        cout<<endl;
    }
}