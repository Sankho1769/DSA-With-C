#include <stdio.h>
int main(void){int n,m,u,v,matrix[50][50]={0};printf("Vertices: ");scanf("%d",&n);printf("Edges: ");scanf("%d",&m);for(int i=0;i<m;i++){printf("Edge u v: ");scanf("%d%d",&u,&v);matrix[u][v]=matrix[v][u]=1;}for(u=0;u<n;u++){printf("%d -> ",u);int first=1;for(v=0;v<n;v++)if(matrix[u][v]){if(!first)printf(", ");printf("%d",v);first=0;}printf("\n");}return 0;}
