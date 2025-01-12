#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<vector<int>>ans;
    vector<int>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    sort(v.begin(),v.end());
    int g=n/3;
    for(int i=0;i<g;i++){
        vector<int>temp;
        for(int j=i;j<n;j+=g){
            temp.push_back(v[j]);
        }
        ans.push_back(temp);
    }
    
    for(int i=0;i<ans.size();i++){
        if(!(ans[i][0]<ans[i][1] && ans[i][1]<ans[i][2])){
            cout<<-1;
            return 0;
        }
        if(!(ans[i][1]%ans[i][0]==0 && ans[i][2]%ans[i][1]==0)){
            cout<<-1;
            return 0;
        }
    }
    for(auto x:ans){
        for(auto i:x){
            cout<<i<<" ";
        }
        cout<<"\n";
    }
return 0;
}