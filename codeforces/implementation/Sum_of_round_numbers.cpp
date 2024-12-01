#include<bits/stdc++.h>
using namespace std;
void printnos(int* x){
	vector<int>ans;
	int n=*x;
	string s=to_string(n);
	int i=s.size()-1;
	for(;i>=0;i--){
		if(s[i]=='0'){
			continue;
		}
		else{
			ans.push_back(stoi(s.substr(i)));
			s[i]='0';
		}
	}
	cout<<ans.size()<<endl;
	for(auto x:ans){
		cout<<x<<" ";
	}	
	cout<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int x;
		cin>>x;
		printnos(&x);
	}
	
}