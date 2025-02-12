// // insertion

// // #include<stdio.h>
// // #include<stdlib.h>

// // struct Node{
// //     int data;
// //     struct Node *next;
// // };

// // void Traversal(struct Node *ptr){
// //     while(ptr != NULL){
// //         printf("Element is: %d\n", ptr -> data);
// //         ptr = ptr -> next;
// //     }
// // }

// // struct Node *insert_start(struct Node *head, int val){
// //     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
// //     ptr -> data = val;
// //     ptr -> next = head;
// //     head = ptr;
// //     return head;
// // }

// // struct Node *insert_index(struct Node *head, int index, int val){
// //     struct Node *ptr = head;
// //     struct Node *p = (struct Node *)malloc(sizeof(struct Node));

// //     int i = 0;

// //     while(i != (index-1)){
// //         ptr = ptr -> next;
// //         i++;
// //     }
// //     p -> data = val;
// //     p -> next = ptr -> next;
// //     ptr -> next = p;

// //     return head;
// // }

// // struct Node *insert_last(struct Node *head, int val){
// //     struct Node *ptr = head;
// //     struct Node *p = (struct Node *)malloc(sizeof(struct Node));

// //     while(ptr -> next != NULL){
// //         ptr = ptr -> next;
// //     }
// //     p -> data = val;
// //     p -> next = NULL;
// //     ptr -> next = p;

// //     return head;
// // }


// // int main(){
// //     struct Node *head = (struct Node *)malloc(sizeof(struct Node));
// //     struct Node *second = (struct Node *)malloc(sizeof(struct Node));
// //     struct Node *third = (struct Node *)malloc(sizeof(struct Node));
// //     struct Node *fourth = (struct Node *)malloc(sizeof(struct Node));

// //     head -> data = 56;
// //     head -> next = second;

// //     second -> data = 60;
// //     second -> next = third;

// //     third -> data = 78;
// //     third -> next = fourth;

// //     fourth -> data = 76;
// //     fourth -> next = NULL;

// //     printf("Before insertion:\n");
// //     Traversal(head);

// //     head = insert_start(head, 23);
// //     head = insert_index(head,2,  34);
// //     head = insert_last(head, 78);

// //     printf("After insertiion:\n");
// //     Traversal(head);
// //     return 0;
// // }


// //deletion

// #include<stdio.h>
// #include<stdlib.h>

// struct Node{
//     int data;
//     struct Node *next;
// };

// void Traversal(struct Node *ptr){
//     while(ptr != NULL){
//         printf("Element is: %d\n", ptr -> data);
//         ptr = ptr -> next;
//     }
// }

// struct Node *del_start(struct Node *head){
//     struct Node *ptr = head;
//     head = head -> next;
//     free(ptr);
//     return head;
// }

// struct Node *del_index(struct Node *head, int index){
//     struct Node *ptr = head;
//     struct Node *q = head -> next;

//     int i = 0;
//     while(i != index-1){
//         ptr = ptr -> next;
//         q = q -> next;
//         i++;
//     }

//     ptr -> next = q -> next;
//     free(q);
//     return head;
// }

// struct Node *del_end(struct Node *head){
//     struct Node *ptr = head;
//     struct Node *q = head -> next;

//     while(q -> next != NULL){
//         ptr = ptr -> next;
//         q = q -> next;
//     }
//     ptr -> next = NULL;
//     free(q);
//     return head;
// }


// int main(){
//     struct Node *head = (struct Node *)malloc(sizeof(struct Node));
//     struct Node *second = (struct Node *)malloc(sizeof(struct Node));
//     struct Node *third = (struct Node *)malloc(sizeof(struct Node));
//     struct Node *fourth = (struct Node *)malloc(sizeof(struct Node));

//     head -> data = 56;
//     head -> next = second;

//     second -> data = 60;
//     second -> next = third;

//     third -> data = 78;
//     third -> next = fourth;

//     fourth -> data = 76;
//     fourth -> next = NULL;

//     printf("Before deletion:\n");
//     Traversal(head);

//     // head = del_start(head);
//     // head = del_index(head, 2);
//     head =  del_end(head);
//     printf("After deletion:\n");
//     Traversal(head);

//     return 0;
// }


