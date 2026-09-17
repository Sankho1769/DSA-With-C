#include <stdio.h>
void merge(int a[],int l,int m,int r){int temp[100],i=l,j=m+1,k=0;while(i<=m&&j<=r)temp[k++]=(a[i]<=a[j])?a[i++]:a[j++];while(i<=m)temp[k++]=a[i++];while(j<=r)temp[k++]=a[j++];for(i=l,k=0;i<=r;i++,k++)a[i]=temp[k];}
void merge_sort(int a[],int l,int r){if(l>=r)return;int m=l+(r-l)/2;merge_sort(a,l,m);merge_sort(a,m+1,r);merge(a,l,m,r);}
int main(void){int n,a[100];printf("Enter number of elements: ");scanf("%d",&n);printf("Enter numbers: ");for(int i=0;i<n;i++)scanf("%d",&a[i]);merge_sort(a,0,n-1);printf("Sorted: ");for(int i=0;i<n;i++)printf("%d%s",a[i],i==n-1?"":" ");printf("\n");return 0;}
