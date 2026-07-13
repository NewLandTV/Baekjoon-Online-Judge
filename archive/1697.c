#include <stdio.h>

#define Min(a, b) ((a) < (b) ? (a) : (b))

int main(void)
{
	int n, k;
	int c = 0;
	
	scanf("%d %d", &n, &k);
	
	if (n >= k)
	{
		printf("%d", n - k);
		
		return 0;
	}
	
	while (k >> 1 > n)
	{
		c++;
		c += k % 2;
		
		if (k & 1)
		{
			k >>= 1;
		}
	}
	
	c += Min(k - n, n - (k >> 1) + 1);
	
	printf("%d", c);
	
	return 0;
}
