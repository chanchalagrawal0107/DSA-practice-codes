#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *createNode(int data){
    struct Node *p = (struct Node *)malloc(sizeof(struct Node));
    p -> data = data;
    p -> left = NULL;
    p -> right = NULL;
    return p;
};

int main{
    // struct Node *p = (struct Node *)malloc(sizeof(struct Node));
    // p -> data = 1;
    // p -> left = NULL;
    // p -> right = NULL;

    // struct Node *p1 = (struct Node *)malloc(sizeof(struct Node));
    // p -> data = 1;
    // p -> left = NULL;
    // p -> right = NULL;

    // struct Node *p2 = (struct Node *)malloc(sizeof(struct Node));
    // p -> data = 1;
    // p2 -> left = NULL;
    // p2 -> right = NULL;

    // p -> left = p1;
    // p -> right = p2;

    struct Node *p = createNode(2);
    struct Node *p1 = createNode(4);
    struct Node *p2 = createNode(6);

    p -> left = p1;
    p -> right = p2;



    return 0;
}