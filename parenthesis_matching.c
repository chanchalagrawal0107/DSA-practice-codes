// #include<stdio.h>
// #include<stdlib.h>

// struct stack{
//     int size;
//     int top;
//     char *arr;
// };

// int isFull(struct stack *ptr){
//     if(ptr -> top == ptr -> size - 1){
//         return 1;
//     }
//     return 0;
// }

// int isEmpty(struct stack *ptr){
//     if(ptr -> top == -1){
//         return 1;
//     }
//     return 0;
// }

// void push(struct stack *ptr, char val){
//     if(isFull(ptr)){
//         printf("stack overflow\n");  // Added newline
//     }
//     else{
//         ptr -> top++;
//         ptr -> arr[ptr -> top] = val;
//     }
// }

// char pop(struct stack *ptr){
//     if(isEmpty(ptr)){
//         printf("stack underflow\n");  // Added newline
//         return -1;
//     }
//     else{
//         char val = ptr -> arr[ptr -> top];
//         ptr -> top--;
//         return val;
//     }
// }

// int parenthesisMatch(char *exp){
//     struct stack *s;
//     s -> size = 100;
//     s -> top = -1;
//     s -> arr = (char *)malloc(s -> size * sizeof(char));
     
//     for(int i = 0; exp[i] != '\0'; i++){
//         if(exp[i] == '('){
//             push(s, '(');
//         }
//         else if(exp[i] == ')'){
//             if(isEmpty(s)){
//                 return 0;
//             }
//             pop(s);
//         }
//     }

//     if(isEmpty(s)){
//         return 1;
//     }
//     return 0;
// }

// int main(){
    
//     char *exp = "2 * (3 + 8) - 9";

//     if(parenthesisMatch(exp))
//         printf("Parenthesis Matching");
//     else
//         printf("Not Matching");

//     return 0;
// } 



// Multiple Parenthesis Matching

#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    char *arr;
};

int isFull(struct stack *ptr){
    if(ptr -> top == ptr -> size - 1){
        return 1;
    }
    return 0;
}

int isEmpty(struct stack *ptr){
    if(ptr -> top == -1){
        return 1;
    }
    return 0;
}

void push(struct stack *ptr, char val){
    if(isFull(ptr)){
        printf("stack overflow\n");  // Added newline
    }
    else{
        ptr -> top++;
        ptr -> arr[ptr -> top] = val;
    }
}

char pop(struct stack *ptr){
    if(isEmpty(ptr)){
        printf("stack underflow\n");  // Added newline
        return -1;
    }
    else{
        char val = ptr -> arr[ptr -> top];
        ptr -> top--;
        return val;
    }
}

int match(char a, char b){
    if(a == '{' && b == '}')
        return 1;

    if(a == '(' && b == ')')
        return 1;

    if(a == '[' && b == ']')
        return 1;

    return 0;
    
}

int parenthesisMatch(char *exp){
    struct stack *s = (struct stack *) malloc(sizeof(struct stack));
    s -> size = 100;
    s -> top = -1;
    s -> arr = (char *)malloc(s -> size * sizeof(char));
    char popped_ch;
    
    for(int i = 0; exp[i] != '\0'; i++){
        if(exp[i] == '(' || exp[i] == '{' || exp[i] == '['){
            push(s, exp[i]);
        }
        else if(exp[i] == ')' || exp[i] == '}' || exp[i] == ']' ){
            if(isEmpty(s)){
                return 0;
            }
            popped_ch = pop(s);
            if(!match(popped_ch, exp[i])){
                return 0;
            }
        }
    }

    if(isEmpty(s)){
        return 1;
    }
    return 0;
}

int main(){
    
    char *exp = "{2 * ][(3 + 8)] - {9";

    if(parenthesisMatch(exp))
        printf("Parenthesis Balanced");
    else
        printf("Not Balanced");

    return 0;
} 