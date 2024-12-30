#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    queue<pair<int,int>>candy;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        candy.push({k,i+1});
    }
    while(candy.size()!=1){
        pair<int,int> f=candy.front();
        if(f.first>m){
            f.first=f.first-m;
            candy.pop();
            candy.push(f);
        }
        else{
            candy.pop();
        }
    }
    cout<<candy.front().second;
    return 0;

}