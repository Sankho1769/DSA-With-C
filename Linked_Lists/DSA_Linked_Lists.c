/*
 * DSA Interview Programs
 * File: DSA_Linked_Lists.c
 * Purpose: Interview-focused Data Structures and Algorithms practice.
 */

#include <stdio.h>
#include <stdlib.h>
typedef struct Node {
    int value;
    struct Node*next;
}
Node;
int main(void) {
    int n,x;
    Node *head=NULL,*tail=NULL,*cur;
    printf("Number of values: ");
    scanf("%d",&n);
    printf("Enter values: ");
    for(int i=0;i<n;i++) {
        scanf("%d",&x);
        Node*p=malloc(sizeof(Node));
        p->value=x;
        p->next=NULL;
        if(!head)head=tail=p;
        else {
            tail->next=p;
            tail=p;
        }
    }
    if(!head)printf("Empty\n");
    else {
        for(cur=head;cur;cur=cur->next)printf("%d%s",cur->value,cur->next?" -> " : "\n");
    } while(head) {
        cur=head;
        head=head->next;
        free(cur);
    }
    return 0;
}
