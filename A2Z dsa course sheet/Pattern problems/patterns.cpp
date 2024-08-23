#include <bits/stdc++.h>
using namespace std;

void print1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
// * * * * * 
// * * * * * 
// * * * * * 
// * * * * * 
// * * * * * 
}
void print2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
// * 
// * * 
// * * * 
// * * * * 
// * * * * * 

}
void print3(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
// 1
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5 

}
void print4(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
// 1
// 2 2 
// 3 3 3 
// 4 4 4 4 
// 5 5 5 5 5 

}
void print5(int n){
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
// * * * * * 
// * * * * 
// * * * 
// * * 
// * 

}
void print6(int n){
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
// 1 2 3 4 5 
// 1 2 3 4 
// 1 2 3 
// 1 2 
// 1 
}
void print7(int n){
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
//     *
//    ***
//   *****
//  *******
// *********

}
void print8(int n){
    for(int i=n;i>=1;i--){
        for(int k=i;k<n;k++){
            cout<<" ";
        }
        for(int j=2*i-1;j>=1;j--){
            cout<<"*";
        }
        cout<<endl;
    }
// *********
//  *******
//   *****
//    ***
//     *
}
void print9(int n){
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n;i>=1;i--){
        for(int k=i;k<n;k++){
            cout<<" ";
        }
        for(int j=2*i-1;j>=1;j--){
            cout<<"*";
        }
        cout<<endl;
    }
//     *
//    ***
//   *****
//  *******
// *********
// *********
//  *******
//   *****
//    ***
//     *

}
void print10(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=n-1;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }    
// * 
// * * 
// * * * 
// * * * * 
// * * * 
// * * 
// * 
}
void print11(int n){
    int k=1;
    for(int i=0;i<n;i++){
        if(i%2==0){
            k=1;
        }
        else{
            k=0;
        }
        for(int j=0;j<=i;j++){
            cout<<k<<" ";
            k=!k;
        }
        cout<<endl;
    }
// 1 
// 0 1 
// 1 0 1 
// 0 1 0 1 
// 1 0 1 0 1 
}
void print12(int n){
    for(int i=1;i<=n;i++){
        //numbers
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        //space
        for(int k=1;k<=2*(n-i);k++){
            cout<<"  ";
        }
        //numbers
        for(int j=i;j>=1;j--){
            cout<<" "<<j;
        }
        cout<<endl;
    }
// 1        1
// 12      21
// 123    321
// 1234  4321
// 1234554321
}
void print13(int n){
    int k=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<k<<" ";
            k++;
        }
        cout<<"\n";
    }
// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15 

}
void print14(int n){
    for(int i=0;i<n;i++){
        for(char j='A';j<=i+65;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
// A 
// A B 
// A B C 
// A B C D 
// A B C D E 
}

void print15(int n){
    for(int i=0;i<n;i++){
        for(char j='A';j<=n-i+64;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
// A B C D E 
// A B C D 
// A B C 
// A B 
// A
}
void print16(int n){
    char c='A';
    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=i;j++){
            cout<<c<<" ";
        }
        c++;
        cout<<endl;
    }
// A 
// B B 
// C C C 
// D D D D 
// E E E E E 
}
void print17(int n){
    for(int i=1;i<=n;i++){
        for(int k=1;k<=(n-i);k++){
            cout<<" ";
        }
        for(char j='A';j<i+65;j++){
            cout<<j; 
        }
        for(char k=63+i;k>=65;k--){
            cout<<k;
        }
        cout<<endl;
    }
//     A
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA
}
void print18(int n){
    for(int i=1;i<=n;i++){
        for(char j=n-i+65;j<n+65;j++){
            cout<<j;
        }
        cout<<endl;
    }
// E
// DE
// CDE
// BCDE
// ABCDE
}
void print19(int n){
    for(int i=n;i>=1;i--){
        //star
        for(int j=1;j<=i;j++){
            cout<<"*"<<" ";
        }
        //space
        for(int k=1;k<=2*(n-i);k++){
            cout<<"  ";
        }
        //star
        for(int j=i;j>=1;j--){
            cout<<" "<<"*";
        }
        cout<<endl;
    }
    for(int i=1;i<=n;i++){
        //star
        for(int j=1;j<=i;j++){
            cout<<"*"<<" ";
        }
        //space
        for(int k=1;k<=2*(n-i);k++){
            cout<<"  ";
        }
        //star
        for(int j=i;j>=1;j--){
            cout<<" "<<"*";
        }
        cout<<endl;
    }
// * * * * *  * * * * *
// * * * *      * * * *
// * * *          * * *
// * *              * *
// *                  *
// *                  *
// * *              * *
// * * *          * * *
// * * * *      * * * *
// * * * * *  * * * * *

}
void print20(int n){
    
        for(int i=1;i<=n;i++){
        //star
        for(int j=1;j<=i;j++){
            cout<<"*"<<" ";
        }
        //space
        for(int k=1;k<=2*(n-i);k++){
            cout<<"  ";
        }
        //star
        for(int j=i;j>=1;j--){
            cout<<" "<<"*";
        }
        cout<<endl;
    }
    for(int i=n-1;i>=1;i--){
        //star
        for(int j=1;j<=i;j++){
            cout<<"*"<<" ";
        }
        //space
        for(int k=1;k<=2*(n-i);k++){
            cout<<"  ";
        }
        //star
        for(int j=i;j>=1;j--){
            cout<<" "<<"*";
        }
        cout<<endl;
    }
// *                  *
// * *              * *
// * * *          * * *
// * * * *      * * * *
// * * * * *  * * * * *
// * * * *      * * * *
// * * *          * * *
// * *              * *
// *                  *

    }
void print21(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if((i>1 && i<n) && (j>1 && j<n)) cout<<" ";
            else cout<<"*";
        }
        cout<<endl;
    }
// * * * * *
// *       *
// *       *
// *       *
// * * * * *    
}
void print22(int n){
      for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            int top=i;
            int left=j;
            int right=(2*n-2)-j;
            int down=(2*n-2)-i;
            cout<<(n-min(min(top,down),min(left,right)))<<" ";
        }
        cout<<endl;
      }
// 5 5 5 5 5 5 5 5 5 
// 5 4 4 4 4 4 4 4 5 
// 5 4 3 3 3 3 3 4 5 
// 5 4 3 2 2 2 3 4 5 
// 5 4 3 2 1 2 3 4 5 
// 5 4 3 2 2 2 3 4 5 
// 5 4 3 3 3 3 3 4 5 
// 5 4 4 4 4 4 4 4 5 
// 5 5 5 5 5 5 5 5 5 

}
int main(){
    int n;
    cin>>n;
    print22(n);

}
