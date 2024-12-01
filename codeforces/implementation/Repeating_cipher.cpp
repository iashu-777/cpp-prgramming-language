#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    string ans;
    
    for(int i=0;i<n;i++){
    	string temp;
		for(int k=1;k<=(i+1);k++){
			temp+=s[i];
		}	
		ans+=temp[0];
	}
	cout<<ans;
	
	return 0;
}
