/*
 * DSA Interview Programs
 * File: DSA_Counting_Sort.c
 * Purpose: Interview-focused Data Structures and Algorithms practice.
 */

#include <stdio.h>
#include <stdlib.h>
void counting_sort(int a[],int n) {
    if(n<=0)return;
    int lo=a[0],hi=a[0];
    for(int i=1;i<n;i++) {
        if(a[i]<lo)lo=a[i];
        if(a[i]>hi)hi=a[i];
    }
    int range=hi-lo+1;
    int *count=calloc(range,sizeof(int));
    if(!count) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    for(int i=0;i<n;i++)count[a[i]-lo]++;
    int k=0;
    for(int i=0;i<range;i++)while(count[i]--)a[k++]=i+lo;
    free(count);
}
int main(void) {
    int n,a[100];
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter integers: ");
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    counting_sort(a,n);
    printf("Sorted: ");
    for(int i=0;i<n;i++)printf("%d%s",a[i],i==n-1?"":" ");
    printf("\n");
    return 0;
}
