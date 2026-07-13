#include <stdio.h>

int main(void)
{
	int i, j;
	int n;
	int a[100], b[100], temp;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		
		b[i] = i;
	}
	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < a[i]; j++)
		{
			temp = b[i];
			b[i] = b[i + j - a[i]];
			b[i + j - a[i]] = temp;
		}
	}
	
	for (i = 0; i < n; i++)
	{
		printf("%d ", b[i]);
	}
	
	return 0;
}
