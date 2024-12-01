#include<bits/stdc++.h>
using namespace std;
void printSnake(int r, int c){
	for(int i=1;i<=r;i++){
		for(int j=1;j<=c;j++){
			if(i%4==0){
			
			if(j==1){
				cout<<'#';
			}
			else{
				cout<<'.';
			}
		}
		else{
		
			if(i%2==0 && j<c){
				cout<<'.';
			}
			else{
				cout<<'#';
			}
		}
		}
		cout<<endl;
	}
}
int main()
{
   int r,c;
   cin>>r>>c;
    printSnake(r,c);
	return 0;
}
