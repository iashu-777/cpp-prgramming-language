#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
string s;
cin>>s;
if(s.find('0')==string::npos){
    s.erase(s.find('1'),1);
    cout<<s;
    return 0;
}
s.erase(s.find('0'),1);
cout<<s;
return 0;
}