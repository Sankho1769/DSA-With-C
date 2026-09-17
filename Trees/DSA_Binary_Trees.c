#include <stdio.h>
int main(void){int n,a[100];printf("Number of level-order values: ");scanf("%d",&n);printf("Level-order values (-1 = empty): ");for(int i=0;i<n;i++)scanf("%d",&a[i]);if(n&&a[0]!=-1)printf("Root: %d\n",a[0]);else printf("Root: Empty\n");return 0;}
