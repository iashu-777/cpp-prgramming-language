#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>>v;
    for(int i=0;i<5;i++){
        vector<int>temp;
        for(int j=0;j<5;j++){
            int k;
            cin>>k;
            temp.push_back(k);
        }
        v.push_back(temp);
    }int maxi=INT_MIN;
    string s="12345";
    do{
        int a=s[0]-48-1;
        int b=s[1]-48-1;
        int c=s[2]-48-1;
        int d=s[3]-48-1;
        int e=s[4]-48-1;
        int sum=v[a][b]+v[b][a]+2*v[c][d]+2*v[d][c]+v[b][c]+v[c][b]+2*v[d][e]+2*v[e][d];
        maxi=max(maxi,sum);
    }while(next_permutation(s.begin(),s.end()));
    cout<<maxi;
    return 0;
}