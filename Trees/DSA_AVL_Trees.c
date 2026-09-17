/*
 * DSA Interview Programs
 * File: DSA_AVL_Trees.c
 * Purpose: Interview-focused Data Structures and Algorithms practice.
 */

#include <stdio.h>
#include <stdlib.h>
typedef struct Node {
    int value,height;
    struct Node*left,*right;
}
Node;
int h(Node*n) {
    return n?n->height:0;
}
int mx(int a,int b) {
    return a>b?a:b;
}
void upd(Node*n) {
    n->height=1+mx(h(n->left),h(n->right));
}
Node*newnode(int x) {
    Node*n=malloc(sizeof(Node));
    n->value=x;
    n->height=1;
    n->left=n->right=NULL;
    return n;
}
Node*rr(Node*y) {
    Node*x=y->left,*t=x->right;
    x->right=y;
    y->left=t;
    upd(y);
    upd(x);
    return x;
}
Node*lr(Node*x) {
    Node*y=x->right,*t=y->left;
    y->left=x;
    x->right=t;
    upd(x);
    upd(y);
    return y;
}
Node*insert(Node*r,int x) {
    if(!r)return newnode(x);
    if(x<r->value)r->left=insert(r->left,x);
    else if(x>r->value)r->right=insert(r->right,x);
    else return r;
    upd(r);
    int b=h(r->left)-h(r->right);
    if(b>1&&x<r->left->value)return rr(r);
    if(b<-1&&x>r->right->value)return lr(r);
    if(b>1) {
        r->left=lr(r->left);
        return rr(r);
    }
    if(b<-1) {
        r->right=rr(r->right);
        return lr(r);
    }
    return r;
}
void inorder(Node*r) {
    if(r) {
        inorder(r->left);
        printf("%d ",r->value);
        inorder(r->right);
    }
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
    int n,x;
    printf("Number of AVL values: ");
    scanf("%d",&n);
    printf("AVL values: ");
    for(int i=0;i<n;i++) {
        scanf("%d",&x);
        root=insert(root,x);
    }
    printf("In-order: ");
    inorder(root);
    printf("\nHeight: %d\n",h(root));
    free_tree(root);
    return 0;
}
