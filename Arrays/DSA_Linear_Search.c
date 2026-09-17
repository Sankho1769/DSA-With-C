#include <stdio.h>
int linear_search(int a[], int n, int target){ for(int i=0;i<n;i++) if(a[i]==target) return i; return -1; }
int main(void){ int n,a[100],target; printf("Enter number of elements: ");scanf("%d",&n); printf("Enter numbers: ");for(int i=0;i<n;i++)scanf("%d",&a[i]); printf("Target: ");scanf("%d",&target); printf("Index: %d\n",linear_search(a,n,target)); return 0; }
