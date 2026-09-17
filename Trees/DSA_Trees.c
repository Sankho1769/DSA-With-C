#include <stdio.h>
int main(void){char root[50],child[100][50];int n;printf("Root value: ");scanf("%49s",root);printf("Number of children: ");scanf("%d",&n);printf("Child values: ");for(int i=0;i<n;i++)scanf("%49s",child[i]);printf("Root: %s\nChildren: ",root);for(int i=0;i<n;i++)printf("%s%s",child[i],i==n-1?"":" ");printf("\n");return 0;}
