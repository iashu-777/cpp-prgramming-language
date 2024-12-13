#include<bits/stdc++.h>
using namespace std;
string replace(string s,int n){
    unordered_map<char,int>mpp;
    for(auto x:s){
        mpp[x]++;
    }
    int max=INT_MIN;
    int min=INT_MAX;
    char d;
    char e;
    for(auto x:mpp)
    {
        if(x.second>max){
            max=x.second;
           d=x.first; 
        }
       
        
        
    }
    for(auto x:mpp){
         if(x.second<min  && x.first!=d){
            min=x.second;
           e=x.first; 
        }
    }
    for(int i=0;i<n;i++){
        
        if(s[i]==e){
s[i]=d;
break;
        }

    }
    return s;

}
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    cout<<replace(s,n)<<endl;
}
}