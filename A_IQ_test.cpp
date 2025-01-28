#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a,b,c) for(ll i=a;i<b;i+=c)

bool func(vector<vector<char>>&v){
    for(ll i=0;i<3;i++){
        for(ll j=0;j<3;j++){
            if(v[i][j]=='#' && v[i][j+1]=='#' && v[i+1][j]=='#' && v[i+1][j+1]=='#'){
                return true;
            }
        }
    }
    return false;
}
bool func2(vector<vector<char>>&v){
    for(ll i=0;i<3;i++){
        for(ll j=0;j<3;j++){
            if(v[i][j]=='.' && v[i][j+1]=='.' && v[i+1][j]=='.' && v[i+1][j+1]=='.'){
                return true;
            }
        }
    }
    return false;
}


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
vector<vector<char>>v;
loop(0,4,1){
    vector<char>temp;
    for(ll j=0;j<4;j++){
    char x;
    cin>>x;
    temp.push_back(x);
    }
    v.push_back(temp);
}
for(ll i=0;i<4;i++){
    for(ll j=0;j<4;j++){
        if(v[i][j]=='.'){
            if(func2(v)){
                cout<<"YES"<<endl;
                return 0;
            }
            v[i][j]='#';
            if(func(v)){
                cout<<"YES"<<endl;
                return 0;
            }
            v[i][j] = '.';
        }
    }
}
for(ll i=0;i<4;i++){
    for(ll j=0;j<4;j++){
        if(v[i][j]=='#'){
            if(func(v)){
                cout<<"YES"<<endl;
                return 0;
            }
            v[i][j]='.';
            if(func2(v)){
                cout<<"YES"<<endl;
                return 0;
            }
            v[i][j] = '#';
        }
    }
}

cout<<"NO"<<endl;

return 0;
}