#include <stdio.h>

int main(void)
{
	int i;
	int n;
	int s[200000];
	int c[9] = { 0, }, cnt;
	int start, end, intervalC[9] = { 0, };
	int len = 0, maxLen = 0;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; scanf("%d", &s[i]), c[s[i++] - 1]++);
	
	for (i = cnt = 0; i < 9; i++)
	{
		if (c[i])
		{
			cnt++;
		}
	}
	
	if (cnt <= 2)
	{
		printf("%d", n);
		
		return 0;
	}
	
	for (cnt = start = end = 0; start < n; start++)
	{
		while (1)
		{
			intervalC[s[end++] - 1]++;
			
			for (i = cnt = 0; i < 9; i++)
			{
				if (intervalC[i])
				{
					cnt++;
				}
			}
			
			if (cnt > 2 || end >= n)
			{
				start++;
				
				break;
			}
		}
		
		intervalC[s[start] - 1] = 0;
		
		for (i = cnt = 0; i < 9; i++)
		{
			if (intervalC[i])
			{
				cnt++;
			}
		}
		
		if (cnt <= 2)
		{
			len = end - start;
		}
		
		maxLen = len > maxLen ? len : maxLen;
	}
	
	printf("%d", maxLen);
	
	return 0;
}
