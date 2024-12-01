#include<bits/stdc++.h>
using namespace std;
void value(string s,int* x){
	if(s=="X++" || s=="++X"){
		*x=*x+1;
	}
	else{
		*x=*x-1;
	}
}
int main()
{
	int n;
	int x=0;
	string s;
    cin>>n;
    while(n--){
    	cin>>s;
    	value(s,&x);
	}
	cout<<x;
	return 0;
}
