// #include <stdio.h>
// #include <stdlib.h>

// struct queue{
//     int frontind;
//     int backind;
//     int *arr;
//     int size;
// };

// int isfull(struct queue * q){
//     return q -> backind == q -> size-1;
// }

// int isempty( struct queue * q){
//     return q -> frontind == q -> backind;

// void enqueue( struct queue * q, int data){
//     if(isfull(q)){
//         printf("Queue is full");
//     }
//     else{
//         q -> backind ++;
//         q -> arr[q -> backind] = data;

//     }
// }

// int dequeue( struct queue * q){
//     if(isempty(q)){
//         printf("Queue is empty");
//     }
//     else{
//         q ->frontind++;
//         int extract = q -> arr[q -> frontind];
//         return extract;
//     }
// }

// void display(struct queue * q){ 
//     for( int i = q -> frontind + 1; i<= q -> backind ; i++){
//         printf("%d",  q-> arr[i]);
//     }
// }

// int main(){
//     struct queue * ptr = (struct queue *)malloc(sizeof(struct queue));
//     ptr -> size = 5;
//     ptr -> frontind = -1;
//     ptr -> backind = -1;
//     ptr -> arr = (int *)malloc(ptr -> size * (sizeof(int)));

//     enqueue(ptr, 5);
//     enqueue(ptr, 5);
//     enqueue(ptr, 5);
//     dequeue(ptr);
//     display(ptr);

// }


// #include <stdio.h>
// #include <stdlib.h>

// struct queue{
//     int f;
//     int r;
//     int *arr;
//     int size;
// };

// int isfull(struct queue * q){
//     if(q -> r == q -> size-1){
//         return 1;
//     }
//     return 0;
// }

// int isempty( struct queue * q){
//     if(q -> f == q -> r){
//         return 1;
//     }
//     return 0;
// }

// void enqueue( struct queue * q, int data){
//     if(isfull(q)){
//         printf("Queue is full");
//     }
//     else{
//         q -> r++;
//         q -> arr[q -> r] = data;

//     }
// }

// int dequeue( struct queue * q){
//     if(isempty(q)){
//         printf("Queue is empty");
//     }
//     else{
//         q ->f++;
//         int extract = q -> arr[q -> f];
//         return extract;
//     }
// }

// void display(struct queue * q){ 
//     for( int i = q -> f + 1 ; i <= q -> r ; i++){
//         printf("%d",  q-> arr[i]);
//     }
// }

// int main(){
//     struct queue * ptr = (struct queue *)malloc(sizeof(struct queue));
//     ptr -> size = 5;
//     ptr -> f = -1;
//     ptr -> r = -1;
//     ptr -> arr = (int *)malloc(ptr -> size * (sizeof(int)));

//     enqueue(ptr, 5);
//     enqueue(ptr, 5);
//     enqueue(ptr, 5);
//     dequeue(ptr);
//     display(ptr);

// }



#include <stdio.h>
#include <stdlib.h>

struct Queue {
    int front;
    int rear;
    int size;
    int *arr;
};

// Function to initialize the queue
struct Queue* createQueue(int size) {
    struct Queue* q = (struct Queue*)malloc(sizeof(struct Queue));
    q->size = size;
    q->front = -1;
    q->rear = -1;
    q->arr = (int*)malloc(q->size * sizeof(int));
    return q;
}

// Check if the queue is full
int isFull(struct Queue* q) {
    return (q->rear == q->size - 1);
}

// Check if the queue is empty
int isEmpty(struct Queue* q) {
    return (q->front == q->rear);
}

// Enqueue operation to add an element to the queue
void enqueue(struct Queue* q, int data) {
    if (isFull(q)) {
        printf("Queue is full. Cannot enqueue %d\n", data);
    } else {
        q->rear++;
        q->arr[q->rear] = data;
        printf("Enqueued %d\n", data);
    }
}

// Dequeue operation to remove an element from the queue
int dequeue(struct Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty. Cannot dequeue\n");
        return -1;
    } else {
        q->front++;
        int data = q->arr[q->front];
        printf("Dequeued %d\n", data);
        return data;
    }
}

// Display all elements in the queue
void display(struct Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty. Nothing to display.\n");
    } else {
        printf("Queue contents: ");
        for (int i = q->front + 1; i <= q->rear; i++) {
            printf("%d ", q->arr[i]);
        }
        printf("\n");
    }
}

// Free the queue memory
void freeQueue(struct Queue* q) {
    free(q->arr);
    free(q);
}

int main() {
    int size, choice, value;
    struct Queue* q;

    printf("Enter the size of the queue: ");
    scanf("%d", &size);
    q = createQueue(size);

    while (1) {
        printf("\nQueue Operations:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display Queue\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to enqueue: ");
                scanf("%d", &value);
                enqueue(q, value);
                break;
            case 2:
                dequeue(q);
                break;
            case 3:
                display(q);
                break;
            case 4:
                freeQueue(q);
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}