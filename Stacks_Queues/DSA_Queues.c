/*
 * DSA Interview Programs
 * File: DSA_Queues.c
 * Purpose: Interview-focused Data Structures and Algorithms practice.
 */

#include <stdio.h>
int main(void) {
    int n,a[100],x;
    printf("Number of values to enqueue: ");
    scanf("%d",&n);
    printf("Values to enqueue: ");
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    if(n) {
        x=a[0];
        for(int i=1;i<n;i++)a[i-1]=a[i];
        n--;
        printf("Dequeue: %d\n",x);
    } else printf("Dequeue: Empty\n");
    printf("Queue: ");
    for(int i=0;i<n;i++)printf("%d%s",a[i],i==n-1?"":" ");
    printf("\n");
    return 0;
}
