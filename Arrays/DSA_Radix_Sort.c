/*
 * DSA Interview Programs
 * File: DSA_Radix_Sort.c
 * Purpose: Interview-focused Data Structures and Algorithms practice.
 */

#include <stdio.h>
#include <stdlib.h>
int max_abs(int a[],int n) {
    int m=0;
    for(int i=0;i<n;i++) {
        int x=a[i]<0?-a[i]:a[i];
        if(x>m)m=x;
    }
    return m;
}
void radix_nonnegative(int a[],int n) {
    int *out=malloc(n*sizeof(int));
    for(int exp=1;exp<=max_abs(a,n);exp*=10) {
        int count[10]= {
            0
        };
        for(int i=0;i<n;i++)count[(a[i]/exp)%10]++;
        for(int i=1;i<10;i++)count[i]+=count[i-1];
        for(int i=n-1;i>=0;i--)out[--count[(a[i]/exp)%10]]=a[i];
        for(int i=0;i<n;i++)a[i]=out[i];
        if(exp>214748364)break;
    }
    free(out);
}
void radix_sort(int a[],int n) {
    int pos[100],neg[100],np=0,nn=0;
    for(int i=0;i<n;i++) {
        if(a[i]<0)neg[nn++]=-a[i];
        else pos[np++]=a[i];
    }
    radix_nonnegative(pos,np);
    radix_nonnegative(neg,nn);
    int k=0;
    for(int i=nn-1;i>=0;i--)a[k++]=-neg[i];
    for(int i=0;i<np;i++)a[k++]=pos[i];
}
int main(void) {
    int n,a[100];
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter integers: ");
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    radix_sort(a,n);
    printf("Sorted: ");
    for(int i=0;i<n;i++)printf("%d%s",a[i],i==n-1?"":" ");
    printf("\n");
    return 0;
}
