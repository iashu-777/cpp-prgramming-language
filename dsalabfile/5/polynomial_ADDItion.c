// 1) Algorithm Add_Polynomials(poly1, poly2)
// 2) Pre: poly1 != NULL and poly2 != NULL (Two linked lists representing polynomials)
// 3) Post: Returns the sum of the two polynomials as a new linked list.
// 4) result ← NULL
// 5) While poly1 != NULL and poly2 != NULL do
// 6)     If poly1.exp == poly2.exp then
// 7)         Insert (poly1.coef + poly2.coef, poly1.exp) into result
// 8)         poly1 ← poly1.next
// 9)         poly2 ← poly2.next
// 10)    Else If poly1.exp > poly2.exp then
// 11)        Insert (poly1.coef, poly1.exp) into result
// 12)        poly1 ← poly1.next
// 13)    Else
// 14)        Insert (poly2.coef, poly2.exp) into result
// 15)        poly2 ← poly2.next
// 16)    End If
// 17) End While
// 18) While poly1 != NULL do
// 19)     Insert (poly1.coef, poly1.exp) into result
// 20)     poly1 ← poly1.next
// 21) End While
// 22) While poly2 != NULL do
// 23)     Insert (poly2.coef, poly2.exp) into result
// 24)     poly2 ← poly2.next
// 25) End While
// 26) Return result
// 27) End Add_Polynomials


#include <stdio.h>
#include <stdlib.h>

// Definition of the polynomial node
struct Node {
    int coef; // Coefficient
    int exp;  // Exponent
    struct Node* next;
};

// Function to insert a new node at the end of the polynomial list
void insertNode(struct Node** head, int coef, int exp) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->coef = coef;
    newNode->exp = exp;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
    } else {
        struct Node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Function to print the polynomial
void printPolynomial(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%dx^%d", temp->coef, temp->exp);
        if (temp->next != NULL)
            printf(" + ");
        temp = temp->next;
    }
    printf("\n");
}

// Function to add two polynomials
struct Node* addPolynomials(struct Node* poly1, struct Node* poly2) {
    struct Node* result = NULL;

    while (poly1 != NULL && poly2 != NULL) {
        if (poly1->exp == poly2->exp) {
            insertNode(&result, poly1->coef + poly2->coef, poly1->exp);
            poly1 = poly1->next;
            poly2 = poly2->next;
        } else if (poly1->exp > poly2->exp) {
            insertNode(&result, poly1->coef, poly1->exp);
            poly1 = poly1->next;
        } else {
            insertNode(&result, poly2->coef, poly2->exp);
            poly2 = poly2->next;
        }
    }

    // Add remaining terms from poly1 or poly2
    while (poly1 != NULL) {
        insertNode(&result, poly1->coef, poly1->exp);
        poly1 = poly1->next;
    }
    while (poly2 != NULL) {
        insertNode(&result, poly2->coef, poly2->exp);
        poly2 = poly2->next;
    }

    return result;
}

int main() {
    struct Node* poly1 = NULL;
    struct Node* poly2 = NULL;

    insertNode(&poly1, 5, 2);
    insertNode(&poly1, 4, 1);
    insertNode(&poly1, 2, 0);

    insertNode(&poly2, 3, 2);
    insertNode(&poly2, 6, 1);
    insertNode(&poly2, 1, 0);

    printf("Polynomial 1: ");
    printPolynomial(poly1);

    printf("Polynomial 2: ");
    printPolynomial(poly2);

    struct Node* sum = addPolynomials(poly1, poly2);

    printf("Sum of Polynomials: ");
    printPolynomial(sum);

    return 0;
}
