#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
string s=to_string(n);
int i=0;
int k=s.size();
while(i<k){
    if(s.substr(i,3)=="144")i+=3;
    else if(s.substr(i,2)=="14")i+=2;
    else if(s.substr(i,1)=="1")i+=1;
    else {
        cout<<"NO";
        return 0;
    }
}
cout<<"YES";
    return 0;
}