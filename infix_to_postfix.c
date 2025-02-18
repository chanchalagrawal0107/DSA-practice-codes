#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stack {
    int size;
    int top;
    char *arr;
};

int isFull(struct stack *ptr) {
    return (ptr->top == ptr->size - 1);
}

int isEmpty(struct stack *ptr) {
    return (ptr->top == -1);
}

void push(struct stack *ptr, char val) {
    if (isFull(ptr)) {
        printf("Stack overflow\n");
    } else {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

char pop(struct stack *ptr) {
    if (isEmpty(ptr)) {
        printf("Stack underflow\n");
        return -1;  // Return -1 to indicate underflow
    } else {
        char val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

char stackTop(struct stack *sp) {
    if (!isEmpty(sp)) {
        return sp->arr[sp->top];  // Return top element
    }
    return '\0';  // Return null character if stack is empty
}

int precedence(char ch) {
    if (ch == '*' || ch == '/') {
        return 3;
    } else if (ch == '+' || ch == '-') {
        return 2;
    } else {
        return 0;
    }
}

int isOperator(char ch) {
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/');
}

char *intopo(char *infix) {
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 100;
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));

    char *postfix = (char *)malloc((strlen(infix) + 1) * sizeof(char)); 
    int i = 0;  // Track infix traversal
    int j = 0;  // Track postfix addition

    while (infix[i] != '\0') {
        if (!isOperator(infix[i])) {  // Operand, add to postfix
            postfix[j] = infix[i];
            j++;
            i++;
        } else {  // Operator
            while (!isEmpty(sp) && precedence(infix[i]) <= precedence(stackTop(sp))) {  
                postfix[j] = pop(sp);  // Pop and add to postfix if precedence is lower or equal
                j++;
            }
            push(sp, infix[i]);  // Push the current operator onto the stack
            i++;
        }
    }

    while (!isEmpty(sp)) {  // Pop remaining operators
        postfix[j] = pop(sp);
        j++;
    }

    postfix[j] = '\0';  // Null terminate postfix expression

    free(sp->arr);
    free(sp);
    
    return postfix;
}

int main() {
    char infix[100];
    printf("Enter an infix expression: ");
    scanf("%s", infix);

    char *postfix = intopo(infix);
    printf("Postfix is: %s\n", postfix);
    free(postfix);  // Free allocated memory for postfix expression

    return 0;
}