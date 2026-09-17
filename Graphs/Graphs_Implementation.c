/*
 * DSA Interview Programs
 * File: Graphs_Implementation.c
 * Purpose: Interview-focused Data Structures and Algorithms practice.
 */

#include <stdio.h>
int main(void) {
    int n,m,u,v,a[50][50]= {
        0
    };
    printf("Vertices: ");
    scanf("%d",&n);
    printf("Edges: ");
    scanf("%d",&m);
    for(int i=0;i<m;i++) {
        printf("Edge u v: ");
        scanf("%d%d",&u,&v);
        a[u][v]=a[v][u]=1;
    }
    printf("Adjacency matrix:\n");
    for(u=0;u<n;u++) {
        for(v=0;v<n;v++)printf("%d%s",a[u][v],v==n-1?"":" ");
        printf("\n");
    }
    return 0;
}
