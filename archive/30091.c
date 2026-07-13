#include <stdio.h>
#include <stdlib.h>

#define Max(a, b) ((a) > (b) ? (a) : (b))

long long p[19999998];

int Compare(const void* a, const void* b);

int main(void)
{
	int i, j, k;
	int n;
	long long l[2000];
	int nl = 0;
	long long sumL, area, maxArea = 0;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%lld", &l[i]);
	}
	
	qsort(l, n, sizeof(long long), Compare);
	
	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			sumL = l[i] + l[j];
			
			for (k = 0; k < nl; k++)
			{
				if (p[k] == sumL)
				{
					break;
				}
			}
			
			if (p[k] != sumL)
			{
				p[nl++] = sumL;
			}
		}
	}
	
	for (i = 0; i < nl; i++)
	{
		for (j = area = 0, k = n - 1; j < k;)
		{
			sumL = l[j] + l[k];
			
			if (sumL < p[i])
			{
				j++;
				
				continue;
			}
			else if (sumL > p[i])
			{
				k--;
				
				continue;
			}
			
			area += l[j] * l[k];
			j++;
			k--;
		}
		
		maxArea = Max(area, maxArea);
	}
	
	printf("%lld", maxArea);
	
	return 0;
}

int Compare(const void* a, const void* b)
{
	return *(long long*)a - *(long long*)b;
}
