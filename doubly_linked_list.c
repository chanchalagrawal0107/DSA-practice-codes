#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
    struct Node *prev;
};

void Traversal(struct Node *ptr){
    while(ptr != NULL){
        printf("Element is: %d\n", ptr -> data);
        ptr = ptr -> next;
    }
}

struct Node *insert_start(struct Node *head, int val){
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr -> data = val;
    ptr -> next = head;
    ptr -> prev = NULL;

    if(head!=NULL)
        head -> prev = ptr;
        
    head = ptr;
    return head;
}

struct Node *insert_index(struct Node *head, int index, int val){
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    ptr -> data = val;
    int i = 0;
    while(i != index -1){
        p = p -> next;
        i++;
    } 
    ptr -> next = p -> next;
    ptr -> prev = p;
    p -> next = ptr;
    return head;
}

struct Node *insert_end(struct Node *head, int val){
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    ptr -> data = val;
    while(p -> next != NULL){
        p = p -> next;
    }
    ptr -> next = NULL;
    p -> next = ptr;
    ptr -> prev = p;
    return head;
}


int main(){
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fourth = (struct Node *)malloc(sizeof(struct Node));

    head -> prev = NULL;
    head -> data = 56;
    head -> next = second;

    second -> prev = head;
    second -> data = 60;
    second -> next = third;

    third -> prev = second;
    third -> data = 78;
    third -> next = fourth;

    fourth -> prev = third;
    fourth -> data = 76;
    fourth -> next = NULL;

    printf("Before insertion:\n");
    Traversal(head);

    head = insert_start(head, 23);
    head = insert_index(head, 2, 34);
    head = insert_end(head, 87);

    printf("After insertion:\n");
    Traversal(head);
    return 0;
}
