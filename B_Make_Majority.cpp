#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a,b,c) for(ll i=a;i<b;i+=c)



int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    string s1;
    ll count_z=0;
    ll count_o=0;
    ll i=0;
    
    while(i<n){
        if(s[i]=='0'){
        while(i<n && s[i]=='0'){
        i++;
        }
        s1+='0';}
        else{
        s1+='1';
        i++;
        }
            
            }
            for(auto x:s1){
                if(x=='0'){
                    count_z++;
                }
                else{
                    count_o++;
                }
            }
            if(count_z>=count_o){
                cout<<"NO"<<"\n";
            }else{
                cout<<"YES"<<"\n";
            }
    
}
return 0;
}