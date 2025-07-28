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
    if (!head) {
        head = createNode(data);
        return;
    }
    Node* temp = head;
    while (temp->next) {
        temp = temp->next;
    }
    temp->next = createNode(data);
}

// Function to merge two sorted linked lists iteratively
Node* mergeLists(Node* head1, Node* head2) {
    Node* dummy = new Node(); // Temporary dummy node
    Node* tail = dummy;

    while (head1 && head2) {
        if (head1->data < head2->data) {
            tail->next = head1;
            head1 = head1->next;
        } else {
            tail->next = head2;
            head2 = head2->next;
        }
        tail = tail->next;
    }

    // Attach any remaining nodes from either list
    if (head1) tail->next = head1;
    else tail->next = head2;

    return dummy->next; // Return the merged list without the dummy node
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