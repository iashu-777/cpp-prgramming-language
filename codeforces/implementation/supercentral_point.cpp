#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<vector<int,int>>v;
    int ways=0;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        v.push_back({a,b});
    }
    int count=0; 
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(v[i][0]>v[j][0] && v[i][1] == v[j][1] ){
                count++;
            }
         else if(v[i][0]>v[j][0] && v[i][1] == v[j][1] ){
                                count++;
                                            }
         else if(v[i][0]>v[j][0] && v[i][1] == v[j][1] ){
                                count++;
                                            }
            else if(v[i][0]>v[j][0] && v[i][1] == v[j][1] ){
                                count++;
                                            }
            
            }
            if( count>=4 )
            ways++;
            count=0;
            }
            cout<<ways;
            return 0;
            }
        
