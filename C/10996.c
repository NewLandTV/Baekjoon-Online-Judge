#include <stdio.h>

int main(void)
{
	int i, j;
	int n;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - (n >> 1); j++)
		{
			printf("* ");
		}
		
		printf("\n");
		
		for (j = 0; j < n >> 1; j++)
		{
			printf(" *");
		}
		
		printf("\n");
	}
	
	return 0;
}
