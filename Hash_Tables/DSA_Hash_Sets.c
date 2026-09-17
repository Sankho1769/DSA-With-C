/*
 * DSA Interview Programs
 * File: DSA_Hash_Sets.c
 * Purpose: Interview-focused Data Structures and Algorithms practice.
 */

#include <stdio.h>
int main(void) {
    int n,a[100],unique[100],u=0,target;
    printf("Number of integers: ");
    scanf("%d",&n);
    printf("Enter integers: ");
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]);
        int exists=0;
        for(int j=0;j<u;j++)if(unique[j]==a[i])exists=1;
        if(!exists)unique[u++]=a[i];
    }
    for(int i=0;i<u;i++)for(int j=i+1;j<u;j++)if(unique[j]<unique[i]) {
        int t=unique[i];
        unique[i]=unique[j];
        unique[j]=t;
    }
    printf("Check value: ");
    scanf("%d",&target);
    printf("Unique: ");
    for(int i=0;i<u;i++)printf("%d%s",unique[i],i==u-1?"":" ");
    int present=0;
    for(int i=0;i<u;i++) if(unique[i]==target) present=1;
    printf("\nPresent: %s\n",present?"True":"False");
    return 0;
}
