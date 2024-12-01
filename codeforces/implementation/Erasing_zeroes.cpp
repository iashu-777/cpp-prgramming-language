#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    	string s;
    	cin>>s;
    	int i,j;
    	i=0;
    	int count=0;
    	j=s.size()-1;
    	while(s[i]=='0'){
    		i++;
		}
		while(s[j]=='0'){
			j--;
		}
		for(int k=i;k<=j;k++){
			if(s[k]=='0'){
				count++;
			}
		}
		cout<<count<<endl;
		
	}
	return 0;
}
