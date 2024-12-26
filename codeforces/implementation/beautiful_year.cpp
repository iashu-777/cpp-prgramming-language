#include<bits/stdc++.h>
using namespace std;
bool isdistinct(string s){
    int n=s.size();
    unordered_set<int>st{s.begin(),s.end()};
    return s.size()==st.size();
}
int main(){
    int year;
    cin>>year;
    while(1){
        year++;
        string t=to_string(year);
        if(isdistinct(t)){
            cout<<year<<endl;
            break;
        }
    }
    return 0;
}