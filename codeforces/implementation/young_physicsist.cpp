#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
        int sum = 0;
        int i,j,k;
        vector<vector<int>>force;
    while(n--){
        cin>>i>>j>>k;
        force.push_back({i,j,k});
    }
    int x,y,z;
    x=y=z=0;
    for(int i=0;i<force.size();i++){
        x+=force[i][0];
        y+=force[i][1];
        z+=force[i][2];
    }   
    
    if(x==0 && y==0 && z==0)
    cout<<"YES";
    else
    cout<<"NO";
}