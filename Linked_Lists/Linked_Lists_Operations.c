/*
 * DSA Interview Programs
 * File: Linked_Lists_Operations.c
 * Purpose: Interview-focused Data Structures and Algorithms practice.
 */

#include <stdio.h>
#include <stdlib.h>
typedef struct Node {
    int value;
    struct Node*next;
}
Node;
void append(Node**head,int x) {
    Node*p=malloc(sizeof(Node));
    p->value=x;
    p->next=NULL;
    if(!*head) {
        *head=p;
        return;
    }
    Node*q=*head;
    while(q->next)q=q->next;
    q->next=p;
}
void delete_value(Node**head,int x) {
    Node*p=*head,*prev=NULL;
    if(!p)return;
    if(p->value==x) {
        *head=p->next;
        free(p);
        return;
    } while(p&&p->value!=x) {
        prev=p;
        p=p->next;
    }
    if(p) {
        prev->next=p->next;
        free(p);
    }
}
int contains(Node*head,int x) {
    for(;head;head=head->next)if(head->value==x)return 1;
    return 0;
}
int main(void) {
    Node*head=NULL;
    int n,x,target;
    printf("Number of initial values: ");
    scanf("%d",&n);
    printf("Initial values: ");
    for(int i=0;i<n;i++) {
        scanf("%d",&x);
        append(&head,x);
    }
    printf("Value to append: ");
    scanf("%d",&x);
    append(&head,x);
    printf("Value to delete: ");
    scanf("%d",&x);
    delete_value(&head,x);
    printf("Value to search: ");
    scanf("%d",&target);
    printf("Found: %s\n",contains(head,target)?"True":"False");
    printf("List: ");
    for(Node*p=head;p;p=p->next)printf("%d%s",p->value,p->next?" ":"\n");
    while(head) {
        Node*p=head;
        head=head->next;
        free(p);
    }
    return 0;
}
