#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int x)
    {
        data=x;
        next=NULL;
    } 
};
void printlist(Node *head){
    
    // Node *curr=head;
    //curr variable se kar sakte hai , ya direct head se
    //bhi kar sakte hai. 
    //printlist ka head aur main ka head alag alga hai
    //function se printlist ka hi head change hoga, main
    // ka head wahin rahega.

    while (head!=NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    int num1,num2,num3,num4;
    cin>>num1;
    cin>>num2;
    cin>>num3;
    cin>>num4;

    Node *head=new Node(num1);
    head->next=new Node(num2);
    head->next->next=new Node(num3);
    head->next->next->next=new Node(num4);
    printlist(head);
    return 0;
}