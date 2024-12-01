#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    	int a,b;
    	cin>>a>>b;
    	int i=min(a,b);
    	for(int m=i;;m++)
    	{
    		if(m%a==m%b){
    			cout<<m<<endl;
    			break;
			}
		}
	}
	return 0;
}
