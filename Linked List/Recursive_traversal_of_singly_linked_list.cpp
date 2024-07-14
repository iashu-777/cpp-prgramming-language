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
void Rec_trav(Node *head){
    if(head==NULL){
        printf("NULL");
        return;
    }
    else{
        cout<<head->data<<"->";
        Rec_trav(head->next);
    }
}
int main(){
    int n1,n2,n3,n4;
    cin>>n1;
    cin>>n2;
    cin>>n3;
    cin>>n4;
    
    Node *head=new Node(n1);
    head->next=new Node(n2);
    head->next->next=new Node(n3);
    head->next->next->next=new Node(n4);
    Rec_trav(head);

}