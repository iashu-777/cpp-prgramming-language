#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string ans;
        if(s.size()>10){
            ans+=s[0];
            ans+=to_string(s.size()-2);
            ans+=s[s.size()-1];
        }
        else{
            ans+=s;
        }
        cout<<ans<<endl;
    }
    return 0;
}