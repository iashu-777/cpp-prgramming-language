#include<bits/stdc++.h>
using namespace std;
int main(){
  int k;
  cin>>k;
  string s="21:00";
  if(k<=59){
  string c=to_string(k%10);
    s[4]=c[0];
    
    string y=to_string(k/10);
    s[3]=y[0];
    
  }
  else{
    int p=k-60;
    string c=to_string(p%10);
    s[4]=c[0];
    
    string y=to_string(p/10);
    s[3]=y[0];
    s[1]=(char)(2+48);
  }
  cout<<s;
  return 0;
}