#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
    cin>>s;
    unordered_map<char,int>mpp;
    for(auto x:s){
    	mpp[x]++;
	}
	int n=mpp.size();
	if(n%2!=0){
	
		cout<<"IGNORE HIM!";
	}
	else{
		cout<<"CHAT WITH HER!";	
	}
	return 0;
}
