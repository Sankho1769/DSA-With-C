#include <stdio.h>
int partition(int a[],int lo,int hi){int pivot=a[hi],p=lo;for(int i=lo;i<hi;i++)if(a[i]<=pivot){int t=a[p];a[p]=a[i];a[i]=t;p++;}int t=a[p];a[p]=a[hi];a[hi]=t;return p;}
void quick_sort(int a[],int lo,int hi){if(lo>=hi)return;int p=partition(a,lo,hi);quick_sort(a,lo,p-1);quick_sort(a,p+1,hi);}
int main(void){int n,a[100];printf("Enter number of elements: ");scanf("%d",&n);printf("Enter numbers: ");for(int i=0;i<n;i++)scanf("%d",&a[i]);quick_sort(a,0,n-1);printf("Sorted: ");for(int i=0;i<n;i++)printf("%d%s",a[i],i==n-1?"":" ");printf("\n");return 0;}
