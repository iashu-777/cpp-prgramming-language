#include<bits/stdc++.h>
using namespace std;
string func(string s){
    int i=0;
    string ans;
    while(i<s.size()){
        if(s[i]=='.'){
            ans+='0';
            i++;
        }
        else if(s[i]=='-'){
            if(s[i+1]=='.'){
                ans+='1';
            }
            else if(s[i+1]=='-'){
                ans+='2';
            }
            i=i+2;
        }
    }
    return ans;
}

int main(){
    string s;
    cin>>s;
    cout<<func(s);
    return 0;
}