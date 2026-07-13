#include <stdio.h>

int main(void)
{
	int i;
	int t;
	int n;
	int a[300000];
	int l, r, min1, min2, min;
	
	scanf("%d", &t);
	
	while (t--)
	{
		scanf("%d", &n);
		
		if (n == 2)
		{
			printf("2\n");
			
			continue;
		}
		
		for (i = 0; i < n; i++)
		{
			scanf("%d", &a[i]);
		}
		
		for (i = 1, l = 0, min1 = n, r = 2; i < n - 1; i++, l++, r++)
		{
			if ((a[l] > a[i] && a[i] < a[r]) || (a[l] < a[i] && a[i] > a[r]))
			{
				l--;
				min1--;
			}
		}
		
		for (i = n - 2, l = n - 3, min2 = n, r = n - 1; i > 0; i--, l--, r--)
		{
			if ((a[l] > a[i] && a[i] < a[r]) || (a[l] < a[i] && a[i] > a[r]))
			{
				r++;
				min2--;
			}
		}
		
		min = min1 < min2 ? min1 : min2;
		
		printf("%d\n", min);
	}
	
	return 0;
}
