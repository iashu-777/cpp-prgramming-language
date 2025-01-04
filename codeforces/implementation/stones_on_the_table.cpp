#include<bits/stdc++.h>
using namespace std;
int func(string s){
    int count=0;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]==s[i+1]){
            count++;
            continue;
        }
    }
    return count;
}

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    cout<<func(s);
    return 0;
}