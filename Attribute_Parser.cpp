#include <cmath>
#include<bits/stdc++.h>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
struct Node{
    string tag;
    vector<pair<int,int>>v;
    Node* next;
};
int main() {
        int n,q;
        cin>>n>>q;
        unordered_map<string,Node*>mpp;
        for(int i=1;i<=n;i++){
            string tag;
            getline(cin,tag);
            if(tag.find("<tag")!=string::npos){
                Node* temp=new Node(); 
            }
        }
    return 0;
}
