#include <stdio.h>

int n, m;
int numbers[8];
int check[8];

void DFS(int depth);

int main(void)
{
	scanf("%d %d", &n, &m);
	DFS(0);
	
	return 0;
}

void DFS(int depth)
{
	int i;
	
	if (depth == m)
	{
		for (i = 0; i < m; i++)
		{
			printf("%d ", numbers[i]);
		}
		
		printf("\n");
		
		return;
	}
	
	for (i = 0; i < n; i++)
	{
		if (!check[i])
		{
			numbers[depth] = i + 1;
			check[i] = 1;
			
			DFS(depth + 1);
			
			check[i] = 0;
		}
	}
}
