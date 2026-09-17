/*
 * DSA Interview Programs
 * File: DSA_Binary_Search.c
 * Purpose: Interview-focused Data Structures and Algorithms practice.
 */

#include <stdio.h>
int binary_search(int a[], int n, int target) {
    int lo=0,hi=n-1;
    while(lo<=hi) {
        int mid=lo+(hi-lo)/2;
        if(a[mid]==target)return mid;
        if(a[mid]<target)lo=mid+1;
        else hi=mid-1;
    }
    return -1;
}
int main(void) {
    int n,a[100],target;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter sorted numbers: ");
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    printf("Target: ");
    scanf("%d",&target);
    printf("Index: %d\n",binary_search(a,n,target));
    return 0;
}
