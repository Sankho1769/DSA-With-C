#include <stdio.h>
#define MAX 100
int queue[MAX], front=0,rear=-1;
int visited[MAX];

void enqueue(int val){ queue[++rear]=val; }
int dequeue(){ return queue[front++]; }

void BFS(int graph[MAX][MAX], int start, int n) {
    visited[start]=1;
    enqueue(start);
    while(front<=rear) {
        int v=dequeue();
        printf("%d ", v);
        for(int i=0;i<n;i++)
            if(graph[v][i] && !visited[i]) {
                visited[i]=1;
                enqueue(i);
            }
    }
}
