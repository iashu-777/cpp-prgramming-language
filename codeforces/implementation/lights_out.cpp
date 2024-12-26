#include<bits/stdc++.h>
using namespace std;
int main(){
    int t=3;
    vector<vector<int>>toggle;
    vector<vector<int>>ans;
    for(int i=0;i<3;i++){
        ans.push_back({1,1,1});
    }
    while(t--){
        int i,j,k;
        cin>>i>>j>>k;
        toggle.push_back({i,j,k});
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(toggle[i][j]!=0){
                if(toggle[i][j]%2!=0){
                    if(i>0)
                    ans[i-1][j]=!ans[i-1][j];
                    if(j>0)
                    ans[i][j-1]=!ans[i][j-1];
                    if(i<2)
                    ans[i+1][j]=!ans[i+1][j];
                    if(j<2)
                    ans[i][j+1]=!ans[i][j+1];
                    ans[i][j]=!ans[i][j];
                    
                }
            }
        }
    }
    for(auto x:ans){
        for(auto t:x){
            cout<<t;
        }
        cout<<endl;
    }
return 0;
}