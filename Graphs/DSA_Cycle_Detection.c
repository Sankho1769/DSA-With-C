#include <stdio.h>
int dfs_cycle(int a[50][50],int n,int u,int parent,int seen[]){seen[u]=1;for(int v=0;v<n;v++)if(a[u][v]){if(!seen[v]){if(dfs_cycle(a,n,v,u,seen))return 1;}else if(v!=parent)return 1;}return 0;}
int main(void){int n,m,u,v,a[50][50]={0},seen[50]={0},cycle=0;printf("Vertices: ");scanf("%d",&n);printf("Undirected edges: ");scanf("%d",&m);for(int i=0;i<m;i++){printf("Edge u v: ");scanf("%d%d",&u,&v);a[u][v]=a[v][u]=1;}for(u=0;u<n;u++)if(!seen[u]&&dfs_cycle(a,n,u,-1,seen)){cycle=1;break;}printf("Cycle exists: %s\n",cycle?"True":"False");return 0;}
