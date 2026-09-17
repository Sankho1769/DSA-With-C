/*
 * DSA Interview Programs
 * File: DSA_Hash_Tables.c
 * Purpose: Interview-focused Data Structures and Algorithms practice.
 */

#include <stdio.h>
#include <string.h>
typedef struct {
    char word[50];
    int count;
}
Entry;
int main(void) {
    int n=0;
    Entry t[100];
    char word[50];
    printf("Enter words (one by one, type END to finish):\n");
    while(n<100) {
        scanf("%49s",word);
        if(strcmp(word,"END")==0)break;
        int found=-1;
        for(int i=0;i<n;i++)if(strcmp(t[i].word,word)==0) {
            found=i;
            break;
        }
        if(found>=0)t[found].count++;
        else {
            strcpy(t[n].word,word);
            t[n].count=1;
            n++;
        }
    }
    printf("Frequency:\n");
    for(int i=0;i<n;i++)printf("%s: %d\n",t[i].word,t[i].count);
    return 0;
}
