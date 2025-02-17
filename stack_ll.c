// #include<stdio.h>
// #include<stdlib.h>

// struct Node{
//     int data;
//     struct Node *next;
// };

// void traversal(struct Node *ptr){
//     while(ptr != NULL){
//         printf("Element: %d\n", ptr->data);
//         ptr = ptr -> next;
//     }
// }

// int isEmpty(struct Node *top){
//     if(top == NULL)
//         return 1;
//     return 0;
// }

// int isFull(struct Node *ptr){
//     struct Node *p = (struct Node *)malloc(sizeof(struct Node));
//     if(p == NULL)
//         return 1;
//     free(p);
//     return 0;
// }

// struct Node *push(struct Node *top, int val){
//     if(isFull(top)){
//         printf("Stack Overflow");
//         return top;
//     }
        
//     else{
//         struct Node *p = (struct Node *)malloc(sizeof(struct Node));
//         p -> data = val;
//         p -> next = top;
//         top = p;
//         return top;
//     }
// }

// struct Node * pop(struct Node *top){
//     if(isEmpty(top)){
//         printf("Stack Underflow");
//         return NULL;
//     }
        
//     else{
//         struct Node *val = top;
//         int popped_val = val -> data;
//         top = top -> next;
//         free(val);
//         printf("Popped value is: %d\n", popped_val);
//         return top;
//     }
// }

// int peek(struct Node *top){
//     if(top == NULL){
//         return -1;
//     }
//     return top -> data;
// }

// int main(){
//     struct Node *top = NULL;

//     traversal(top);
//     top = push(top, 34);
//     top = push(top, 76);
//     top = push(top, 90);
//     traversal(top);

//     top = pop(top);
//     traversal(top);
//     return 0;
// }



// #include <stdio.h>
// #include <stdlib.h>

// // Node structure to hold stack elements
// struct Node {
//     int data;
//     struct Node* next;
// };

// // Stack structure
// struct stack {
//     struct Node* top; // Pointer to the top node
// };


// // Function to create a stack
// struct stack *createStack() {
//     struct stack *s = (struct stack *)malloc(sizeof(struct stack));
//     s->top = NULL; // Stack is initially empty
//     return s;
// }

// // Check if the stack is empty
// int isEmpty(struct stack *s) {
//     return s->top == NULL;
// }

// // Add an item to the stack
// void push(struct stack *s, int value) {
//     struct Node* n = (struct Node*)malloc(sizeof(struct Node));
//     n->data = value;
//     n->next = s->top;
//     s->top = n;
//     printf("%d pushed to stack\n", value);
// }

// // Remove an item from the stack
// int pop(struct stack *s) {
//     if (!isEmpty(s)) {
//         struct Node* temp = s->top;
//         int poppedValue = temp->data;
//         s->top = s->top->next;
//         free(temp); // Free the memory of the popped node
//         return poppedValue;
//     } else {
//         printf("Stack underflow! Cannot pop\n");
//         return -1; // Error indicator
//     }
// }

// // Get the top item of the stack
// int peek(struct stack *s) {
//     if (!isEmpty(s)) {
//         return s->top->data;
//     } else {
//         printf("Stack is empty! Cannot peek\n");
//         return -1; // Error indicator
//     }
// }

// // Display the elements in the stack
// void display(struct stack *s) {
//     if (isEmpty(s)) {
//         printf("Stack is empty\n");
//         return;
//     }
//     struct Node* current = s->top;
//     printf("Stack elements: ");
//     while (current != NULL) {
//         printf("%d ", current->data);
//         current = current->next;
//     }
//     printf("\n");
// }

// // Main function to demonstrate stack operations
// int main() {
//     struct stack *s = createStack();
//     int n;

//     printf("Enter the number of values for the stack: ");
//     scanf("%d", &n);
//     int value;
//     for (int i = 0; i < n; i++) {
        
//         printf("Enter value %d: ", i + 1);
//         scanf("%d", &value);
//         push(s, value);
//     }

//     int choice;
//     do {
//         printf("\nMenu:\n");
//         printf("1. Push\n");
//         printf("2. Pop\n");
//         printf("3. Peek\n");
//         printf("4. Display\n");
//         printf("5. Exit\n");
//         printf("Enter your choice: ");
//         scanf("%d", &choice);

//         switch (choice) {
//             case 1:
//                 printf("Enter an integer to push: ");
//                 scanf("%d", &value);
//                 push(s, value);
//                 break;
//             case 2:
//                 value = pop(s);
//                 if (value != -1) {
//                     printf("%d popped from stack\n", value);
//                 }
//                 break;
//             case 3:
//                 value = peek(s);
//                 if (value != -1) {
//                     printf("Top item is %d\n", value);
//                 }
//                 break;
//             case 4:
//                 display(s);
//                 break;
//             case 5:
//                 printf("Exiting...\n");
//                 break;
//             default:
//                 printf("Invalid choice! Please try again.\n");
//         }
//     } while (choice != 5);

//     // Cleanup: free the stack nodes
//     while (!isEmpty(s)) {
//         pop(s);
//     }
//     free(s); // Free the stack structure
//     return 0;
// }



// #include <stdio.h>
// #include <stdlib.h>

// // Node structure to hold stack elements
// struct Node {
//     int data;
//     struct Node* next;
// };

// // Stack structure
// struct stack {
//     struct Node* top; // Pointer to the top node
// };


// // Function to create a stack
// struct stack *createStack() {
//     struct stack *s = (struct stack *)malloc(sizeof(struct stack));
//     s->top = NULL; // Stack is initially empty
//     return s;
// }

// // Check if the stack is empty
// int isEmpty(struct stack *s) {
//     return s->top == NULL;
// }

// // Add an item to the stack
// void push(struct stack *s, int value) {
//     struct Node* n = (struct Node*)malloc(sizeof(struct Node));
//     n->data = value;
//     n->next = s->top;
//     s->top = n;
//     printf("%d pushed to stack\n", value);
// }

// // Remove an item from the stack
// int pop(struct stack *s) {
//     if (!isEmpty(s)) {
//         struct Node* temp = s->top;
//         int poppedValue = temp->data;
//         s->top = s->top->next;
//         free(temp); // Free the memory of the popped node
//         return poppedValue;
//     } else {
//         printf("Stack underflow! Cannot pop\n");
//         return -1; // Error indicator
//     }
// }

// // Get the top item of the stack
// int peek(struct stack *s) {
//     if (!isEmpty(s)) {
//         return s->top->data;
//     } else {
//         printf("Stack is empty! Cannot peek\n");
//         return -1; // Error indicator
//     }
// }

// // Display the elements in the stack
// void display(struct stack *s) {
//     if (isEmpty(s)) {
//         printf("Stack is empty\n");
//         return;
//     }
//     struct Node* current = s->top;
//     printf("Stack elements: ");
//     while (current != NULL) {
//         printf("%d ", current->data);
//         current = current->next;
//     }
//     printf("\n");
// }

// // Main function to demonstrate stack operations
// int main() {
//     struct stack *s = createStack();
//     push(s, 10);
//     push(s, 10);
//     push(s, 10);
//     push(s, 10);

//     int value = pop(s);
//     if(value != -1)
//         printf("%d", value);
//     else
//         printf("Stack Empty");
//     value = peek(s);
//     if(value != -1)
//         printf("%d", value);
//     else
//         printf("Stack empty");
    
//     display(s);

//     return 0;
// }


//Final practice code for stack implementation using linked list
#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct stack{
    struct Node *top;
};

struct stack *createStack(){
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s -> top = NULL;
    return s;
}

int isEmpty(struct stack *s){
    return s -> top == NULL;
}

void push(struct stack *s, int val){
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    if(n == NULL)
        printf("Stack Overflow");
    else{
        n -> data = val;
        n -> next = s -> top;
        s -> top = n;
        printf("Element pushed to stack: %d\n", val);
    }
}

int pop(struct stack *s){
    if(isEmpty(s)){
        printf("Stack Underflow");
        return -1;
    }
    struct Node *n = s -> top;
    int popped_val = n -> data;
    s -> top = s -> top -> next;
    printf("Popped value is: %d\n", popped_val);
    free(n);
    return popped_val;
}

void display(struct stack *s){
    struct Node *temp = s -> top;
    while(temp != NULL){
        printf("Elements are: %d ", temp -> data);
        temp = temp -> next;
    }
}

int main(){
    struct stack *s = createStack();
    push(s, 4);
    push(s, 5);

    int pv = pop(s);

    display(s);

    return 0;
}