#include<stdio.h>
#include<stdlib.h>

struct Node{
    struct Node *left;
    struct Node *right;
    int data;
};

struct Node *createNode(int data){
    struct Node *p = (struct Node *)malloc(sizeof(struct Node));
    p -> data = data;
    p -> left = NULL;
    p -> right = NULL;
    return p;
};

// void inorder(struct Node *root){
//     if(root != NULL){
//         inorder(root -> left);
//         printf("%d", root -> data);
//         inorder(root -> right);
//     }
// }

int isBST(struct Node *root){
    static struct Node *prev = NULL;
    if(root != NULL){
        if(!isBST(root -> left)){
            return 0;
        }
        if(prev != NULL && root -> data <= prev -> data){
            return 0;
        }
        prev = root;
        return isBST(root -> right);

    }
    else    
        return 1;
}


int main(){
    struct Node *p = createNode(2);
    struct Node *p1 = createNode(3);
    struct Node *p2 = createNode(4);
    struct Node *p3 = createNode(5);
    struct Node *p4 = createNode(6);

    p -> left = p1;
    p -> right = p2;
    p1 -> left = p3;
    p1 -> right = p4;

    printf("%d", isBST(p));

    return 0;

}
