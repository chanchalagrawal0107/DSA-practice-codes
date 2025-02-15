// // Insertion

// #include<stdio.h>
// #include<stdlib.h>

// struct Node{
//     int data;
//     struct Node *next;
// };

// void Traversal(struct Node *head){
//     struct Node *ptr = head;
//     do{
//         printf("Element is: %d\n", ptr -> data);
//         ptr = ptr -> next;
//     } 
//     while (ptr != head);
    
// }

// struct Node *insert_start(struct Node *head, int val){
//     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
//     struct Node *p = head ->next;
//     ptr -> data = val;

//     while(p -> next != head){
//         p = p -> next;
//     }
//     p -> next = ptr;
//     ptr -> next = head;
//     head = ptr;
//     return head;
// }

// struct Node *insert_index(struct Node *head, int index, int val){
//     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
//     ptr -> data = val;
//     struct Node *p = head;

//     int i = 0;
//     while(i != index - 1 && ptr -> next != head){
//         p = p -> next;
//         i++;
//     }

//     ptr -> next = p -> next;
//     p -> next = ptr;
//     return head;
// }

// struct Node *insert_end(struct Node *head, int val){
//     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
//     struct Node *p = head ->next;
//     ptr -> data = val;

//     while(p -> next != head){
//         p = p -> next;
//     }
//     p -> next = ptr;
//     ptr -> next = head;
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
//     fourth -> next = head;

//     Traversal(head);
//     head = insert_start(head, 45);
//     // head = insert_index(head, 2 ,9);
//     // head = insert_end(head, 34);
//     Traversal(head);

//     return 0;
// }

// Deletion

// #include<stdio.h>
// #include<stdlib.h>

// struct Node{
//     int data;
//     struct Node *next;
// };

// void Traversal(struct Node *head){
//     struct Node *ptr = head;
//     do{
//         printf("Element is: %d\n", ptr -> data);
//         ptr = ptr -> next;
//     } 
//     while (ptr != head);
    
// }

// struct Node *del_first(struct Node *head){
//     struct Node *ptr = head;
//     struct Node *p = head;

//     while(p -> next != head){
//         p = p -> next;
//     }
//     p -> next = head -> next;
//     head = head -> next;
//     free(ptr);
//     return head;
// }

// struct Node *del_index(struct Node *head, int index){
//     struct Node *ptr = head;
//     struct Node *p = head -> next;
//     int i = 0;
//     while(i != index - 1){
//         ptr = ptr -> next;
//         p = p -> next;
//         i++;
//     }
//     ptr -> next = p -> next;
//     free(p);
//     return head;
// }

// struct Node *del_end(struct Node *head){
//     struct Node *ptr = head;
//     struct Node *p = head -> next;
//     while (p -> next != head)
//     {
//         ptr = ptr -> next;
//         p = p -> next;
//     }
//     ptr -> next = head;
//     free(p);
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
//     fourth -> next = head;

//     Traversal(head);
//     // head = del_first(head);
//     // head = del_index(head, 2);
//     head = del_end(head);
//     Traversal(head);

//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// struct Node {
//     int data;
//     struct Node *next;
// };

// // Traversal function
// void Traversal(struct Node *head) {
//     if (head == NULL) {
//         printf("List is empty.\n");
//         return;
//     }
//     struct Node *ptr = head;
//     printf("List: ");
//     do {
//         printf("%d ", ptr->data);
//         ptr = ptr->next;
//     } while (ptr != head);
//     printf("\n");
// }

// // Insert at the start of the list
// struct Node *insert_start(struct Node *head, int val) {
//     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
//     struct Node *p = head;

//     ptr->data = val;

//     if (head == NULL) {  // If the list is empty
//         ptr->next = ptr;
//         return ptr;
//     }

//     while (p->next != head) {
//         p = p->next;
//     }
//     p->next = ptr;
//     ptr->next = head;
//     head = ptr;
//     return head;
// }

// // Delete the first node
// struct Node *del_first(struct Node *head) {
//     if (head == NULL) {
//         printf("List is empty. Deletion failed.\n");
//         return NULL;
//     }

//     struct Node *ptr = head;
//     struct Node *p = head;

//     if (head->next == head) {  // Single node case
//         free(head);
//         return NULL;
//     }

//     while (p->next != head) {
//         p = p->next;
//     }

//     p->next = head->next;
//     head = head->next;
//     free(ptr);
//     return head;
// }

// // Delete a node at a specific index
// struct Node *del_index(struct Node *head, int ind) {
//     if (head == NULL) {
//         printf("List is empty. Deletion failed.\n");
//         return NULL;
//     }

//     if (ind == 0) {  // Special case for the first node
//         return del_first(head);
//     }

//     struct Node *ptr = head;
//     struct Node *p = head->next;
//     int i = 0;

//     // Traverse to the (index-1)th node
//     while (i < ind - 1 && p->next != head) {
//         ptr = ptr->next;
//         p = p->next;
//         i++;
//     }

//     if (i != ind - 1 || p == head) {  // Invalid index
//         printf("Invalid index. Deletion failed.\n");
//         return head;
//     }

//     ptr->next = p->next;
//     free(p);
//     return head;
// }

// // Main function
// int main() {
//     struct Node *head = NULL;
//     int choice, val, ind;

//     while (1) {
//         printf("\n--- Menu ---\n");
//         printf("1. Insert at start\n");
//         printf("2. Delete first\n");
//         printf("3. Delete at index\n");
//         printf("4. Display list\n");
//         printf("5. Exit\n");
//         printf("Enter your choice: ");
//         scanf("%d", &choice);

//         switch (choice) {
//             case 1:
//                 printf("Enter value to insert at start: ");
//                 scanf("%d", &val);
//                 head = insert_start(head, val);
//                 break;

//             case 2:
//                 head = del_first(head);
//                 break;

//             case 3:
//                 printf("Enter index to delete: ");
//                 scanf("%d", &ind);
//                 head = del_index(head, ind);
//                 break;

//             case 4:
//                 Traversal(head);
//                 break;

//             case 5:
//                 printf("Exiting...\n");
//                 return 0;

//             default:
//                 printf("Invalid choice. Please try again.\n");
//         }
//     }
// }