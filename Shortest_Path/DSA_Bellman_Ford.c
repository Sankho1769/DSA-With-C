#include <stdio.h>
#define INF 1000000000
typedef struct{int u,v,w;}Edge;
int main(void){int n,m,s;Edge e[200];int d[50];printf("Vertices: ");scanf("%d",&n);printf("Directed weighted edges: ");scanf("%d",&m);for(int i=0;i<m;i++){printf("u v weight: ");scanf("%d%d%d",&e[i].u,&e[i].v,&e[i].w);}printf("Source: ");scanf("%d",&s);for(int i=0;i<n;i++)d[i]=INF;d[s]=0;for(int k=0;k<n-1;k++){int changed=0;for(int i=0;i<m;i++)if(d[e[i].u]!=INF&&d[e[i].u]+e[i].w<d[e[i].v]){d[e[i].v]=d[e[i].u]+e[i].w;changed=1;}if(!changed)break;}for(int i=0;i<m;i++)if(d[e[i].u]!=INF&&d[e[i].u]+e[i].w<d[e[i].v]){printf("Reachable negative cycle detected\n");return 1;}printf("Distances: ");for(int i=0;i<n;i++){if(d[i]==INF)printf("INF");else printf("%d",d[i]);if(i<n-1)printf(" ");}printf("\n");return 0;}
