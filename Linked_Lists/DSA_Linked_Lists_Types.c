/*
 * DSA Interview Programs
 * File: DSA_Linked_Lists_Types.c
 * Purpose: Interview-focused Data Structures and Algorithms practice.
 */

#include <stdio.h>
int main(void) {
    int n,a[100];
    printf("Number of values: ");
    scanf("%d",&n);
    printf("Enter values: ");
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    printf("Singly: ");
    for(int i=0;i<n;i++)printf("%d%s",a[i],i==n-1?"":" -> ");
    printf("\nDoubly: ");
    for(int i=0;i<n;i++)printf("%d%s",a[i],i==n-1?"":" <-> ");
    printf("\nCircular: ");
    for(int i=0;i<n;i++)printf("%d -> ",a[i]);
    printf(n?"(head)\n":"Empty\n");
    return 0;
}
