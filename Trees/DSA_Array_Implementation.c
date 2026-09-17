#include <stdio.h>
int main(void){int n,a[100];printf("Number of tree values: ");scanf("%d",&n);printf("Tree array values: ");for(int i=0;i<n;i++)scanf("%d",&a[i]);for(int i=0;i<n;i++){int l=2*i+1,r=2*i+2;printf("Node %d: left=",a[i]);if(l<n)printf("%d",a[l]);else printf("None");printf(", right=");if(r<n)printf("%d",a[r]);else printf("None");printf("\n");}return 0;}
