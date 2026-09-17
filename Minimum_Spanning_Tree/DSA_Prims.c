/*
 * DSA Interview Programs
 * File: DSA_Prims.c
 * Purpose: Interview-focused Data Structures and Algorithms practice.
 */

#include <stdio.h>
#define INF 1000000000
int main(void) {
    int n,m,a[50][50],key[50],parent[50],used[50]= {
        0
    }
    ,u,v,w,total=0;
    for(int i=0;i<50;i++)for(int j=0;j<50;j++)a[i][j]=INF;
    printf("Vertices: ");
    scanf("%d",&n);
    printf("Edges: ");
    scanf("%d",&m);
    for(int i=0;i<m;i++) {
        printf("u v weight: ");
        scanf("%d%d%d",&u,&v,&w);
        a[u][v]=a[v][u]=w;
    }
    for(int i=0;i<n;i++) {
        key[i]=INF;
        parent[i]=-1;
    }
    key[0]=0;
    printf("MST edges:\n");
    for(int k=0;k<n;k++) {
        u=-1;
        for(int i=0;i<n;i++)if(!used[i]&&(u==-1||key[i]<key[u]))u=i;
        if(u==-1||key[u]==INF)break;
        used[u]=1;
        total+=key[u];
        if(parent[u]!=-1)printf("%d - %d (%d)\n",parent[u],u,key[u]);
        for(v=0;v<n;v++)if(a[u][v]<key[v]&&!used[v]) {
            key[v]=a[u][v];
            parent[v]=u;
        }
    }
    for(int i=0;i<n;i++)if(!used[i]) {
        printf("Graph is disconnected\n");
        return 1;
    }
    printf("MST weight: %d\n",total);
    return 0;
}
