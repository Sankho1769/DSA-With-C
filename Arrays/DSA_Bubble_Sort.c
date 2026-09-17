/*
 * DSA Interview Programs
 * File: DSA_Bubble_Sort.c
 * Purpose: Interview-focused Data Structures and Algorithms practice.
 */

#include <stdio.h>
void bubble_sort(int a[],int n) {
    for(int end=n-1;end>0;end--) {
        int swapped=0;
        for(int i=0;i<end;i++)if(a[i]>a[i+1]) {
            int t=a[i];
            a[i]=a[i+1];
            a[i+1]=t;
            swapped=1;
        }
        if(!swapped)break;
    }
}
int main(void) {
    int n,a[100];
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter numbers: ");
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    bubble_sort(a,n);
    printf("Sorted: ");
    for(int i=0;i<n;i++)printf("%d%s",a[i],i==n-1?"":" ");
    printf("\n");
    return 0;
}
