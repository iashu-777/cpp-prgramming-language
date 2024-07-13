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
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    printlist(head);
    return 0;
}