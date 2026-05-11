#include<stdio.h>

int queue[10], front = -1, rear = -1;
int visited[10] = {0};
int graph[10][10], n;

void enqueue(int value)
{
    if(rear == 9)
    {
        printf("Queue Overflow");
    }
    else
    {
        if(front == -1)
            front = 0;

        rear++;
        queue[rear] = value;
    }
}

int dequeue()
{
    int item;

    if(front == -1 || front > rear)
    {
        return -1;
    }

    item = queue[front];
    front++;

    return item;
}

void bfs(int start)
{
    int i, node;

    enqueue(start);
    visited[start] = 1;

    while(front <= rear)
    {
        node = dequeue();

        printf("%d ", node);

        for(i = 0; i < n; i++)
        {
            if(graph[node][i] == 1 && visited[i] == 0)
            {
                enqueue(i);
                visited[i] = 1;
            }
        }
    }
}

int main()
{
    int i, j, start;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix:\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &graph[i][j]);
        }
    }

    printf("Enter starting vertex: ");
    scanf("%d", &start);

    printf("BFS Traversal: ");
    bfs(start);

    return 0;
}
