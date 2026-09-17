/*
 * DSA Interview Programs
 * File: DSA_Stacks.c
 * Purpose: Interview-focused Data Structures and Algorithms practice.
 */

#include <stdio.h>
int main(void) {
    int n,a[100],x;
    printf("Number of values to push: ");
    scanf("%d",&n);
    printf("Values to push: ");
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    if(n) {
        printf("Top: %d\n",a[n-1]);
        x=a[--n];
        printf("Pop: %d\n",x);
    } else printf("Top: Empty\nPop: Empty\n");
    printf("Stack: ");
    for(int i=0;i<n;i++)printf("%d%s",a[i],i==n-1?"":" ");
    printf("\n");
    return 0;
}
