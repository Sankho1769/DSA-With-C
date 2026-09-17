/*
 * DSA Interview Programs
 * File: DSA_Graphs_Traversal.c
 * Purpose: Interview-focused Data Structures and Algorithms practice.
 */

#include <stdio.h>
void bfs(int a[50][50],int n,int s) {
    int q[50],front=0,rear=0,seen[50]= {
        0
    };
    q[rear++]=s;
    seen[s]=1;
    printf("BFS: ");
    while(front<rear) {
        int u=q[front++];
        printf("%d%s",u,front==rear?"":" ");
        for(int v=0;v<n;v++)if(a[u][v]&&!seen[v]) {
            seen[v]=1;
            q[rear++]=v;
        }
    }
    printf("\n");
}
void dfs(int a[50][50],int n,int u,int seen[]) {
    seen[u]=1;
    printf("%d ",u);
    for(int v=0;v<n;v++)if(a[u][v]&&!seen[v])dfs(a,n,v,seen);
}
int main(void) {
    int n,m,u,v,s,a[50][50]= {
        0
    }
    ,seen[50]= {
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
    printf("Start: ");
    scanf("%d",&s);
    bfs(a,n,s);
    printf("DFS: ");
    dfs(a,n,s,seen);
    printf("\n");
    return 0;
}
