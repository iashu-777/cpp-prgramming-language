#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
    cin>>s;
 	vector<int>v;
	for(auto x:s){
		if(x=='+'){
			continue;
		}
		else{
			int n=(int)x-48;
			v.push_back(n);
		}
	}

	sort(v.begin(),v.end());
		
	string ans;
	for(auto x:v){
		ans=ans+((char)(x+48));
		ans=ans+'+';
	}   
	auto it=ans.end();
	it--;
	ans.erase(it);
	cout<<ans;
	return 0;
}
