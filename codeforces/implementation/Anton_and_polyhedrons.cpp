#include<bits/stdc++.h>
using namespace std;
void face_calculate(int* sum,string s){
	if(s=="Tetrahedron")
	{
		*sum=*sum+4;
	}
	else if(s=="Cube"){
		*sum=*sum+6;
	}
	else if(s=="Octahedron"){
		*sum=*sum+8;
	}
	else if(s=="Dodecahedron"){
		*sum=*sum+12;
	}
	else{
		*sum=*sum+20;
	}
}
int main()
{
	int sum=0;
    int t;
    cin>>t;
    while(t--){
    string s;
    	cin>>s;
    	face_calculate(&sum,s);
	}
	cout<<sum;
	
	return 0;
}
