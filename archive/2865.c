#include <stdio.h>

int main(void)
{
	int j, l;
	int n, m, k;
	int p;
	float is;
	int i, s;
	float result = 0.0f;
	
	scanf("%d %d %d", &n, &m, &k);
	
	for (j < 0; j < m; j++)
	{
		for (l = 0; l < n; l++)
		{
			scanf("%d %f", &p, &is);
			
			i = is;
			s = (int)(is * 10) % 10;
			
			if (s > p)
			{
				result += s;
			}
		}
	}
	
	printf("%.1f", result);
	
	return 0;
}
