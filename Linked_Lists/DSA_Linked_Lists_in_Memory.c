#include <stdio.h>
#include <stdlib.h>
typedef struct Node{int value;struct Node*next;}Node;
int main(void){int n,x;Node*head=NULL,*tail=NULL;printf("Number of values: ");scanf("%d",&n);printf("Enter values: ");for(int i=0;i<n;i++){scanf("%d",&x);Node*p=malloc(sizeof(Node));p->value=x;p->next=NULL;if(!head)head=tail=p;else{tail->next=p;tail=p;}}for(Node*p=head;p;p=p->next)printf("Node(value=%d, next=%s%d)\n",p->value,p->next?"":"None",p->next?p->next->value:0);while(head){Node*p=head;head=head->next;free(p);}return 0;}
