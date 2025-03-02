#include<stdio.h>
#include<stdlib.h>
struct Node{
    int coeff;
    int exp;
    struct Node* next;
};

struct Node* createNode(int coeff,int exp){
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->coeff=coeff;
    newNode->exp=exp;
    newNode->next=NULL;
    return newNode;
}
// struct Node* insertAtBegin(struct Node* list1,int coeff,int exp){
//     struct Node* newNode=createNode(coeff,exp);
//     if(list1==NULL){
//         list1=newNode;
//         return list1;
//     }
//     else {
//         newNode->next=list1;
//         list1=newNode;
//         return list1;
//     }
// }
struct Node* insertNode(struct Node* head, int coeff, int exp) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->coeff = coeff;
    newNode->exp = exp;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        struct Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    return head;
}
struct Node* poly(struct Node* list1,struct Node* list2){
    struct Node* res=NULL;
    while(list1!=NULL && list2!=NULL){
        if(list1->exp==list2->exp){
            res=insertNode(res,list1->coeff+list2->coeff,list1->exp);
            list1=list1->next;
            list2=list2->next;
        }
        else if(list1->exp>list2->exp){
            res=insertNode(res,list1->coeff,list1->exp);
            list1=list1->next;
        }
        else{
            res=insertNode(res,list2->coeff,list2->exp);
            list2=list2->next;
        }
    }
    while(list1!=NULL){
        res=insertNode(res,list1->coeff,list1->exp);
        list1=list1->next;
    }
    while(list2!=NULL){
        res=insertNode(res,list2->coeff,list2->exp);
        list2=list2->next;
    }
    return res;
}
void display(struct Node* head2){
    struct Node* temp=head2;
    while(temp!=NULL){
        printf("%dx%d ",temp->coeff,temp->exp);
        temp=temp->next;
    }
}
int main(){
    struct Node* list1=NULL;
    list1=insertNode(list1,10,1);
    list1=insertNode(list1,20,2);
    list1=insertNode(list1,30,3);
    list1=insertNode(list1,40,4);
    list1=insertNode(list1,50,5);
    list1=insertNode(list1,60,6);
    list1=insertNode(list1,70,7);

    struct Node* list2=NULL;
    list2=insertNode(list2,10,8);
    list2=insertNode(list2,20,9);
    list2=insertNode(list2,30,10);
    list2=insertNode(list2,40,11);
    list2=insertNode(list2,50,12);
    list2=insertNode(list2,60,13);
    list2=insertNode(list2,70,14);
    
    struct Node* result=poly(list1,list2);
    display(list1);
    printf("\n");
    display(list2);
    printf("\n");
    display(result);
   
}