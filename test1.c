#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *createNode(int value)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}
struct Node *insertAtK(struct Node *head, int value, int k)
{
    if (k <= 0)
    {
        printf("INVALID POSITION\n");
        return head;
    }
    struct Node *newNode = createNode(value);
    if (head == NULL)
    {
        head = newNode;
        return head;
    }
    if (k == 1)
    {
        newNode->next = head;
        head = newNode;
        return head;
    }
    else{
        struct Node *temp = head;
        for(int i=1;i<=k-2;i++){
            if(temp->next==NULL){
                break;
            }
            temp=temp->next;
        }
        newNode->next=temp->next;
        temp->next=newNode;
        return head;
    }
}
void display(struct Node* head2){
    struct Node* temp=head2;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
int main()
{
    struct Node *head = NULL;
    head = insertAtK(head, 10, 1);
    head = insertAtK(head, 20, 2);
    head = insertAtK(head, 30, 50);
    head = insertAtK(head, 40, 1);
    head = insertAtK(head, 20, 2);
    head = insertAtK(head, 580, 5);
    head = insertAtK(head, 20, 7);
    display(head);
    
}