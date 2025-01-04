#include<bits/stdc++.h>
using namespace std;
int main(){
    set<pair<char,int>>st;
    st.insert({'h',1});
    st.insert({'e',2});
    st.insert({'l',3});
    st.insert({'l',4});
    st.insert({'o',5});
    string s;
    cin>>s;
    int i=1;
    int flag1=1;
    int flag2=1;
    int flag3=1;
    int flag4=1;
    int flag5=1;
    for(auto x:s){
        if(flag1 && x=='h'){
            st.insert({'h',i});
            i++;
            flag1=0;
        }
        else if(flag2 &&x=='e'){
            st.insert({'e',i});
            i++;
            flag2=0;
        }
        else if(flag3 && x=='l'){
            st.insert({'l',i});
            i++;
            flag3=0;
        }
        else if(flag4 && x=='l'){
            st.insert({'l',i});
            i++;
            flag4=0;
        }
        else if(flag5 && x=='o'){
            st.insert({'o',i});
            i++;
            flag5=0;
        }
    }
    if(st.size()==5){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}