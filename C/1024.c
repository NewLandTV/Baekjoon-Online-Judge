#include <stdio.h>

int main(void)
{
	int i, j;
	int n, l;
	int k, x;
	
	scanf("%d %d", &n, &l);
	
	for (i = l; i <= 100; i++)
	{
		k = n - ((i * (i + 1)) >> 1);	// n - (1부터 i까지의 합)
		
		if (k % i)
		{
			continue;
		}
		
		x = k / i + 1;
		
		if (x < 0)
		{
			continue;
		}
		
		for (j = 0; j < i; j++)
		{
			printf("%d ", x + j);
		}
		
		return 0;
	}
	
	printf("-1");
		
	return 0;
}
