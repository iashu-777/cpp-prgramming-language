#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1;
    string s2;
    getline(cin,s1);
    getline(cin,s2);
    for(int i=0;i<s2.size();i++){
        if(s2[i]==' ')continue;
        if(s1.find(s2[i])!=string::npos){
            s1[s1.find(s2[i])]='0';
        }
        else{
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}