#include <stdio.h>
void insertion_sort(int a[],int n){for(int i=1;i<n;i++){int key=a[i],j=i-1;while(j>=0&&a[j]>key){a[j+1]=a[j];j--;}a[j+1]=key;}}
int main(void){int n,a[100];printf("Enter number of elements: ");scanf("%d",&n);printf("Enter numbers: ");for(int i=0;i<n;i++)scanf("%d",&a[i]);insertion_sort(a,n);printf("Sorted: ");for(int i=0;i<n;i++)printf("%d%s",a[i],i==n-1?"":" ");printf("\n");return 0;}
