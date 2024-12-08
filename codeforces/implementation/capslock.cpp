#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    //for size 1
    if(s.size()>1){
        int i=1;
    }
    if(s.size()==1){
        if(s[0]>=97 && s[0]<=122){
            s[0]-=32;
        }
    }
    else{
    if((s[0]>='A' && s[0]<='Z')&&(s[1]>='A' && s[1]<='Z')){
        int i=1;
        while(i<s.size()){
            s[i]+=32;
            i++;
        }
    }
    else if((s[0]>='a' && s[0]<='z')&&(s[1]>='A' && s[1]<='Z')){
        s[0]-=32;
        int i=1;
        while(i<s.size()){
            s[i]+=32;
            i++;
        }
    }
    }
    cout<<s;
    return 0;
    

}