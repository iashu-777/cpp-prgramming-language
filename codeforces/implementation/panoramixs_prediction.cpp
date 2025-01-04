#include<bits/stdc++.h>
using namespace std;
string func(int a,int b){
    a++;
    int flag=0;
    while(flag!=1){
for(int i=2;i<=sqrt(a);i++){
    if(a%i==0){
        a++;
        i=1;
        continue;
    }
}
flag=1;
}
if(a==b)
return "YES";
else
return "NO";
}


int main(){
    int a,b;
    cin>>a>>b;
    cout<<func(a,b);
    return 0;
}