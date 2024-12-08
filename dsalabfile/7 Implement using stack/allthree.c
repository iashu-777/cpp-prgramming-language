// 1) Algorithm infixToPostfix(infix, postfix)
// 2) Pre: infix is a valid infix expression
// 3) Post: postfix contains the postfix conversion of infix
// 4) i ← 0
// 5) j ← 0
// 6) while infix[i] ≠ '\0'
// 7)     if infix[i] is an operand (isalnum)
// 8)         postfix[j] ← infix[i]
// 9)         j ← j + 1
// 10)    else if infix[i] is '('
// 11)        push(infix[i])
// 12)    else if infix[i] is ')'
// 13)        while top ≥ 0 and peek() ≠ '('
// 14)            postfix[j] ← pop()
// 15)            j ← j + 1
// 16)        pop() // pop '('
// 17)    else if infix[i] is an operator
// 18)        while top ≥ 0 and precedence(peek()) ≥ precedence(infix[i])
// 19)            postfix[j] ← pop()
// 20)            j ← j + 1
// 21)        push(infix[i])
// 22)    i ← i + 1
// 23) end while
// 24) while top ≥ 0
// 25)     postfix[j] ← pop()
// 26)     j ← j + 1
// 27) postfix[j] ← '\0'
// 28) end infixToPostfix


// 1) Algorithm evaluatePostfix(postfix)
// 2) Pre: postfix is a valid postfix expression
// 3) Post: Returns the evaluated result of the postfix expression
// 4) i ← 0
// 5) while postfix[i] ≠ '\0'
// 6)     if postfix[i] is a digit
// 7)         push(postfix[i] - '0')
// 8)     else if postfix[i] is an operator
// 9)         operand2 ← pop()
// 10)        operand1 ← pop()
// 11)        switch postfix[i]
// 12)            case '+': push(operand1 + operand2); break
// 13)            case '-': push(operand1 - operand2); break
// 14)            case '*': push(operand1 * operand2); break
// 15)            case '/': push(operand1 / operand2); break
// 16)        end switch
// 17)     i ← i + 1
// 18) end while
// 19) return pop()
// 20) end evaluatePostfix


// 1) Algorithm balanceParentheses(expression)
// 2) Pre: expression is a valid string containing parentheses
// 3) Post: Returns 1 if parentheses are balanced, 0 otherwise
// 4) i ← 0
// 5) while expression[i] ≠ '\0'
// 6)     if expression[i] is '('
// 7)         push(expression[i])
// 8)     else if expression[i] is ')'
// 9)         if top == -1
// 10)            return 0 // Unbalanced
// 11)        pop()
// 12)     i ← i + 1
// 13) end while
// 14) return (top == -1) // Balanced if stack is empty
// 15) end balanceParentheses


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

// Stack structure
#define MAX 100
char stack[MAX];
int top = -1;

void push(char c) {
    if (top < MAX - 1) {
        stack[++top] = c;
    }
}

char pop() {
    if (top >= 0) {
        return stack[top--];
    }
    return -1;
}

char peek() {
    if (top >= 0) {
        return stack[top];
    }
    return -1;
}

int precedence(char c) {
    if (c == '^') return 3;
    if (c == '*' || c == '/') return 2;
    if (c == '+' || c == '-') return 1;
    return 0;
}

// Infix to Postfix Conversion
void infixToPostfix(char* infix, char* postfix) {
    int i = 0, j = 0;
    while (infix[i] != '\0') {
        if (isalnum(infix[i])) {
            postfix[j++] = infix[i];
        } else if (infix[i] == '(') {
            push(infix[i]);
        } else if (infix[i] == ')') {
            while (top >= 0 && peek() != '(') {
                postfix[j++] = pop();
            }
            pop(); // pop '('
        } else {
            while (top >= 0 && precedence(peek()) >= precedence(infix[i])) {
                postfix[j++] = pop();
            }
            push(infix[i]);
        }
        i++;
    }
    while (top >= 0) {
        postfix[j++] = pop();
    }
    postfix[j] = '\0';
}

// Postfix Expression Evaluation
int evaluatePostfix(char* postfix) {
    int i = 0, operand1, operand2;
    while (postfix[i] != '\0') {
        if (isdigit(postfix[i])) {
            push(postfix[i] - '0');
        } else {
            operand2 = pop();
            operand1 = pop();
            switch (postfix[i]) {
                case '+': push(operand1 + operand2); break;
                case '-': push(operand1 - operand2); break;
                case '*': push(operand1 * operand2); break;
                case '/': push(operand1 / operand2); break;
            }
        }
        i++;
    }
    return pop();
}

// Balancing Parentheses
int balanceParentheses(char* expression) {
    int i = 0;
    while (expression[i] != '\0') {
        if (expression[i] == '(') {
            push(expression[i]);
        } else if (expression[i] == ')') {
            if (top == -1) {
                return 0; // Unbalanced
            }
            pop();
        }
        i++;
    }
    return top == -1; // Balanced if stack is empty
}

int main() {
    char infix[MAX], postfix[MAX], expression[MAX];
    
    // Infix to Postfix Conversion
    printf("Enter infix expression: ");
    gets(infix);
    infixToPostfix(infix, postfix);
    printf("Postfix expression: %s\n", postfix);
    
    // Postfix Evaluation
    printf("Enter postfix expression: ");
    gets(postfix);
    printf("Postfix evaluation result: %d\n", evaluatePostfix(postfix));
    
    // Parentheses Balancing
    printf("Enter an expression to check parentheses balancing: ");
    gets(expression);
    if (balanceParentheses(expression)) {
        printf("Parentheses are balanced.\n");
    } else {
        printf("Parentheses are not balanced.\n");
    }
printf("~Ashish Kumar Gupta \n CS-DS-2A \n 2301641540057");
    
    return 0;
}
