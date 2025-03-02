#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};
struct Node* createNode(int value){
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=value;
    newNode->next=NULL;
    return newNode;
}
struct Node* insertAtBegin(struct Node* head1,int value){
    struct Node* newNode=createNode(value);
    if(head1==NULL){
        head1=newNode;
        return head1;
    }
    else {
        newNode->next=head1;
        head1=newNode;
        return head1;
    }
}
struct Node* createNewLL(struct Node* head1){
    struct Node* head2=NULL;
    struct Node* temp=head1;
    while(temp!=NULL){
        head2=insertAtBegin(head2,temp->data);
        temp=temp->next;
        if(temp!=NULL){
            temp=temp->next;
        }
    }
    return head2;
}
void display(struct Node* head2){
    struct Node* temp=head2;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
int main(){
    struct Node* head1=NULL;
    head1=insertAtBegin(head1,10);
    head1=insertAtBegin(head1,20);
    head1=insertAtBegin(head1,30);
    head1=insertAtBegin(head1,40);
    head1=insertAtBegin(head1,50);
    head1=insertAtBegin(head1,60);
    head1=insertAtBegin(head1,70);

    printf("new linear ll by selecting alternate elements \n");
    struct Node* head2=createNewLL(head1);
    display(head1);
}