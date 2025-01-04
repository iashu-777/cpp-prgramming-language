#include<bits/stdc++.h>
using namespace std;
int main(){
    int s1,s2,s3,s4;
    vector<int>t;
    cin>>s1>>s2>>s3>>s4;
    t.push_back(s1);
    t.push_back(s2);
    t.push_back(s3);
    t.push_back(s4);
    sort(t.begin(),t.end());
    int count=0;
    for(int i=0;i<3;i++){
        if(t[i]==t[i+1]){
            count++;
        }
    }
    cout<<count;
    return 0;
}
