#include<bits/stdc++.h>
using namespace std;
using ll =long long;
using ld =long double;

int main(){

ios::sync_with_stdio(false);
cin.tie(NULL);

int n;
cin>>n;
int a[n];
int sum=0;
for(int i=0 ; i< n ; i++) {
    cin>>a[i];
sum+=a[i];
}

// for(int i=0 ; i< n ; i++){
//     for(int j=0 ; j< n ;j++){
// if(a[i]-a[j]>1) {
//     a[i]--;
//     a[j]++;
// }
// if(a[j]-a[i]>1){
//     a[j]--;
//     a[i]++;
// }
//     }

// }
if(n==1) cout<<n;
else if(sum%n==0) cout<<n;
else cout<<n-1;



}