#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++){
            if(s[i]=='q')
            s[i]='p';
            else if(s[i]=='p')
            s[i]='q';
            else
            continue;
        }
        reverse(s.begin(),s.end());
        cout<<s<<endl;
    }
}