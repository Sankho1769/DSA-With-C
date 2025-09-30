#include <stdio.h>
#define MAX 5
int queue[MAX], front=0, rear=-1, count=0;

void enqueue(int val) {
    if(count == MAX) printf("Queue Full\n");
    else {
        rear = (rear+1)%MAX;
        queue[rear] = val;
        count++;
    }
}
int dequeue() {
    if(count == 0) { printf("Queue Empty\n"); return -1; }
    int val = queue[front];
    front = (front+1)%MAX;
    count--;
    return val;
}
