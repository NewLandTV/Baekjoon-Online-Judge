#include <stdio.h>

int main(void)
{
	int i, j;
	int t;
	int n, m;
	int doc[100];
	int temp;
	
	scanf("%d", &t);
	
	for (; t > 0; t--)
	{
		scanf("%d %d", &n, &m);
		
		for (i = 0; i < n; i++)
		{
			scanf("%d", &doc[i]);
		}
		
		if (n == 1)
		{
			printf("1");
			
			continue;
		}
		
		for (i = 0; i < n - 1; i++)
		{
			for (j = i + 1; j < n; j++)
			{
				if (doc[i] < doc[j])
				{
					
				}
			}
		}
		
		printf("%d\n", 9);
	}
	
	return 0;
}
