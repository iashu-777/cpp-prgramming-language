#include<bits/stdc++.h>
using namespace std;
string func(string s){
    int U=0,L=0;
for(auto x:s){
    if(x>='a' && x<='z'){
        L++;
    }
    else if(x>='A' && x<='Z'){
        U++;
    }
}
if(L>=U){
for(int i=0;i<s.size();i++){
    if(s[i]>='A' && s[i]<='Z'){
        s[i]+=32;
    }
}
}
else{
    for(int i=0;i<s.size();i++){
    if(s[i]>='a' && s[i]<='z'){
        s[i]-=32;
    }
}   
}

return s;
}

int main(){
    string s;
    cin>>s;
    cout<<func(s);
    return 0;
}