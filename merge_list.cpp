// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define mod 998244353
// #define loop(a,b,c) for(ll i=a;i<b;i+=c)
// ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
// ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }

// struct Node{
//     int data;
//     struct Node *next;
// };
// struct Node* creatNode(struct Node* head,int val){

// }
// int main(){
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);

// return 0;
// }















#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Function to create a new node
Node* createNode(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;
    return newNode;
}

// Function to insert a node at the end of the list
void insertNode(Node*& head, int data) {
    if (head==NULL) {
        head = createNode(data);
        return;
    }
    Node* temp = head;
    while (temp->next) {
        temp = temp->next;
    }
    temp->next = createNode(data);
}

// Function to merge two sorted linked lists
Node* mergeLists(Node* head1, Node* head2) {
    if (head1==NULL) return head2;
    if (head2==NULL) return head1;
    
    Node* mergedHead = nullptr;
    
    if (head1->data < head2->data) {
        mergedHead = head1;
        mergedHead->next = mergeLists(head1->next, head2);
    } else {
        mergedHead = head2;
        mergedHead->next = mergeLists(head1, head2->next);
    }
    
    return mergedHead;
}

// Function to print the linked list
void printList(Node* head) {
    while (head) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head1 = nullptr;
    Node* head2 = nullptr;

    // First sorted list
    insertNode(head1, 1);
    insertNode(head1, 3);
    insertNode(head1, 5);
    
    // Second sorted list
    insertNode(head2, 2);
    insertNode(head2, 4);
    insertNode(head2, 6);

    cout << "List 1: ";
    printList(head1);
    cout << "List 2: ";
    printList(head2);

    Node* mergedHead = mergeLists(head1, head2);
    cout << "Merged List: ";
    printList(mergedHead);

    return 0;
}