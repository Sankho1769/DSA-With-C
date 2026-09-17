#include <stdio.h>
int main(void){int n,a[100],max;printf("Enter number of elements: ");scanf("%d",&n);if(n<=0){printf("Input array cannot be empty\n");return 1;}printf("Enter integers: ");for(int i=0;i<n;i++)scanf("%d",&a[i]);max=a[0];for(int i=1;i<n;i++)if(a[i]>max)max=a[i];printf("Maximum: %d\n",max);return 0;}
