#include <stdio.h>

int main(void)
{
	int i, j, k;
	int n;
	int m;
	int p[12];
	int b;
	int e;
	int profit;
	int maxProfit = -1;
	int temp = 0;
	
	scanf("%d", &n);
	
	for (i = 1; i <= n; i++)
	{
		scanf("%d", &m);
		
		for (temp = 0, j = 0; j < 12; j++)
		{
			scanf("%d", &p[j]);
			
			temp = p[j];
			
			if (temp != 0 && temp < p[j])
			{
				b = j - 1;
			}
		}
		
		printf("Case #%d: ", i);
		
		for (j = 0; j < 11; j++)
		{
			for (k = j + 1; k < 12; k++)
			{
				profit = p[j] + p[k];
				
				if (profit > maxProfit)
				{
					maxProfit = profit;
				}
			}
		}
		
		if (maxProfit - m <= 0)
		{
			printf("IMPOSSIBLE\n");
			
			continue;
		}
		
		printf("%d %d %d\n", b, e, maxProfit - m);
	}
	
	return 0;
}
