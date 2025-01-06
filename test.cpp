#include <bits/stdc++.h>
#include <string>

using namespace std;

// you just need to implement this function
string mostCommonWord(string document) {
    // your code here
    string s;
    transform(document.begin(), document.end(), document.begin(), ::tolower);
    unordered_map<string,pair<int,vector<int>>>mpp;
    int i;
    for(i=0;i<document.size();i++){
        if(document[i]==' '){
            
            mpp[s].first++;
            mpp[s].second.push_back(i);
            s="";
        }else{
        s+=document[i];
    }
    }
     mpp[s].first++;
            mpp[s].second.push_back(i);
    int max=0;
    int min=INT_MAX;
    for(auto x:mpp){
        if(x.second.first>max){
            max=x.second.first;
        }
    }
    string ans;
    // for(auto x:mpp){
    //     cout<<x.first<<" "<<x.second.first<<" "<<x.second.second[0]<<endl;
    // }
    for(auto x:mpp){
        if(x.second.first==max){
            if(x.second.second[0]<min){
                min=x.second.second[0];
                ans=x.first;
                
            }
        }
    }
    return ans;
}

int main() {
    string document;
    getline(cin, document); 


    // please do not change the below code
    cout << mostCommonWord(document);
    return 0;
}