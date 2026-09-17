/*
 * DSA Interview Programs
 * File: DSA_Binary_Search_Trees.c
 * Purpose: Interview-focused Data Structures and Algorithms practice.
 */

#include <stdio.h>
#include <stdlib.h>
typedef struct Node {
    int value;
    struct Node*left,*right;
}
Node;
Node*insert(Node*r,int x) {
    if(!r) {
        r=malloc(sizeof(Node));
        r->value=x;
        r->left=r->right=NULL;
        return r;
    }
    if(x<r->value)r->left=insert(r->left,x);
    else if(x>r->value)r->right=insert(r->right,x);
    return r;
}
void inorder(Node*r) {
    if(r) {
        inorder(r->left);
        printf("%d ",r->value);
        inorder(r->right);
    }
}
int search(Node*r,int x) {
    while(r) {
        if(r->value==x)return 1;
        r=x<r->value?r->left:r->right;
    }
    return 0;
}
void free_tree(Node*r) {
    if(r) {
        free_tree(r->left);
        free_tree(r->right);
        free(r);
    }
}
int main(void) {
    Node*root=NULL;
    int n,x,target;
    printf("Number of BST values: ");
    scanf("%d",&n);
    printf("BST values: ");
    for(int i=0;i<n;i++) {
        scanf("%d",&x);
        root=insert(root,x);
    }
    printf("Search target: ");
    scanf("%d",&target);
    printf("In-order: ");
    inorder(root);
    printf("\nFound: %s\n",search(root,target)?"True":"False");
    free_tree(root);
    return 0;
}
