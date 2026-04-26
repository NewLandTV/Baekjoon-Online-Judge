#include <stdio.h>

int main(void)
{
	int i, j;
	int n;
	char c[200][403];
	
	scanf("%d", &n);
	
	for (i = 0; i < n * 2; i++)
	{
		for (j = 0; j < n * 4 + 2; j++)
		{
			c[i][j] = ' ';
		}
	}
	
	for (i = 0; i < n * 2; i++)
	{
		c[n * 2 - i - 1][i] = '*';
	}
	
	for (i = 0; i < n; i++)
	{
		c[i][n * 3 - i] = '*';
		c[i][n * 3 + 2 + i] = '*';
	}
	
	for (i = 0; i < n; i++)
	{
		c[n * 2 - i - 1][n * 3 - i] = '*';
		c[n * 2 - i - 1][n * 3 + 2 + i] = '*';
	}
	
	for (i = 0; i < n * 2; i++)
	{
		printf("%s\n", c[i]);
	}
	
	return 0;
}
