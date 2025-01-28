#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a,b,c) for(ll i=a;i<b;i+=c)



int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n;
cin>>n;
ll k;
ll k1;
if(n%2==0){
    k=n;
    k1=n-2;
}
else{
    k=n-1;
    k1=n-1;
}
string st1;
string st2;
for(ll i=0;i<k/2;i++){
    if(i%2==0){
    st1+='a';
    st1+='a';}
    else{
        st1+='b';
        st1+='b';
    }
}
string st3;
for(ll i=0;i<k1/2;i++){
    if(i%2==0){
    st2+='d';
    st2+='d';}
    else{
        st2+='e';
        st2+='e';
    }
}
for(ll i=0;i<k1/2;i++){
    if(i%2==0){
    st3+='e';
    st3+='e';}
    else{
        st3+='d';
        st3+='d';
    }
}
if(n%2==0){
    cout<<st1<<endl;
    cout<<'c'<<st2<<'z'<<endl;
    cout<<'c'<<st3<<'z'<<endl;
    cout<<st1<<endl;
}
else{
    cout<<'l'<<st1<<endl;
    cout<<'l'<<st2<<endl;
    cout<<st1<<'z'<<endl;
    cout<<st2<<'z'<<endl;
}
return 0;
}