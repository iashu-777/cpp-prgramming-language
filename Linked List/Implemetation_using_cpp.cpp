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
int main(){

    //simple implementation

    Node *head=new Node(10);
    Node *temp1=new Node(20);
    Node *temp2=new Node(30);
    head->next=temp1;
    temp1->next=temp2;
    Node *ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data<<"->";
        ptr=ptr->next;
    }
    cout<<"NULL "<<endl;

    //short implementation

    Node *head2=new Node(10);
    head2->next=new Node(20);
    head2->next->next=new Node(30);

    Node *ptr2=head2;
    while(ptr2!=NULL){
        cout<<ptr2->data<<"->";
        ptr2=ptr2->next;
    }
    cout<<"NULL "<<endl;
    return 0;
}