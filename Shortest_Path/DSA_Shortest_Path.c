/*
 * DSA Interview Programs
 * File: DSA_Shortest_Path.c
 * Purpose: Interview-focused Data Structures and Algorithms practice.
 */

#include <stdio.h>
int main(void) {
    int n,m,a[50][50]= {
        0
    }
    ,dist[50],q[50],f=0,r=0,s,u,v;
    printf("Vertices: ");
    scanf("%d",&n);
    printf("Edges: ");
    scanf("%d",&m);
    for(int i=0;i<m;i++) {
        printf("Edge u v: ");
        scanf("%d%d",&u,&v);
        a[u][v]=a[v][u]=1;
    }
    printf("Source: ");
    scanf("%d",&s);
    for(int i=0;i<n;i++)dist[i]=-1;
    dist[s]=0;
    q[r++]=s;
    while(f<r) {
        u=q[f++];
        for(v=0;v<n;v++)if(a[u][v]&&dist[v]==-1) {
            dist[v]=dist[u]+1;
            q[r++]=v;
        }
    }
    printf("Distances: ");
    for(int i=0;i<n;i++)printf("%d%s",dist[i],i==n-1?"":" ");
    printf("\n");
    return 0;
}
