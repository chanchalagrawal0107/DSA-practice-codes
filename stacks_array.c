#include <stdio.h>
#include <stdlib.h>

struct stack{
    int size;
    int *arr;
    int top;
};

int isfull(struct stack *s){
    return s -> top== s -> size-1;
}

int isempty(struct stack *s){
    return s -> top == -1;
}

void push(struct stack *s, int data){
    if(isfull(s)){
        printf("stack overflow");
    }
    else{
        s -> top++;
        s -> arr[ s -> top] = data; 
    }
}

int pop( struct stack *s){
    if(isempty(s)){
        printf("Stack Underflow");
        return -1;
    }
    else{
        int extracted = s -> arr[s -> top];
        s -> top--;
        return extracted;
    }
}

int peek(struct stack *s, int i){
    if(s -> arr[s -> top - i + 1]<0)
        return -1;
    return s -> arr[s -> top];
}

int display(struct stack *s){
    for( int i =0; i <= s-> top; i++){
        printf("%d ", s -> arr[i]);
        
    }
}

int main(){
    struct stack * s = (struct stack*)malloc(sizeof(struct stack));
    s -> size = 5;
    s -> top  = -1;
    s -> arr = (int *)malloc(s -> size * (sizeof(int)));

    push(s, 5);
    push(s, 6);
    push(s, 7);
    
    
    display(s);
    int popped_value = pop(s);
    printf("%d\n", popped_value);

    int p = peek(s, 2);
    printf("%d\n", p);

    display(s);

    return 0;

}
