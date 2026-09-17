#include <stdio.h>
#include <string.h>
typedef struct{char key[50],value[100];}Pair;
int main(void){int n;Pair data[100];char key[50],value[100];printf("Number of pairs: ");scanf("%d",&n);for(int i=0;i<n;i++){printf("Key: ");scanf("%49s",data[i].key);printf("Value: ");scanf("%99s",data[i].value);}printf("Lookup key: ");scanf("%49s",key);for(int i=0;i<n;i++)if(strcmp(data[i].key,key)==0){printf("Result: %s\n",data[i].value);return 0;}printf("Result: Not found\n");return 0;}
