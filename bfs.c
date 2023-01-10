#include<stdio.h>

int adj[20][20], visited[20], queue[20],front=-1,rear=-1,n,v,i,j;

void bfs(int v)
{
	for(i=1;i<=n;i++)
	{
		if(adj[v][i] && !visited[i])
		queue[++rear]=i;

	}
	
	if(front<=rear)
	{
		visited[queue[front]]=1;
		bfs(queue[front++]);
	}
}

void main()
{
	int v;
	printf("Enter the no of vertices in the graph \n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		visited[i]=0;
		queue[i]=0;
	}
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			adj[i][j]=0;
			
		}
	}
	
	printf("Enter the adjacency matrix \n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			
			scanf("%d",&adj[i][j]);
			
		}
	}
	
	printf("Enter the starting vertex \n");
	scanf("%d",&v);
	bfs(v);
	
	printf("The node which are reacheable are \n");
	for(i=1;i<=n;i++)
	{
		if(visited[i]==1)
		printf("%d-> ",i);
		
		else{
		printf("BFS is not possible \n");
		break;
		}
	}
}


