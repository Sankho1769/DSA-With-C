#include <stdio.h>
void selection_sort(int a[],int n){for(int i=0;i<n;i++){int min_i=i;for(int j=i+1;j<n;j++)if(a[j]<a[min_i])min_i=j;int t=a[i];a[i]=a[min_i];a[min_i]=t;}}
int main(void){int n,a[100];printf("Enter number of elements: ");scanf("%d",&n);printf("Enter numbers: ");for(int i=0;i<n;i++)scanf("%d",&a[i]);selection_sort(a,n);printf("Sorted: ");for(int i=0;i<n;i++)printf("%d%s",a[i],i==n-1?"":" ");printf("\n");return 0;}
