#include <stdio.h>

int main(void)
{
	int i;
	int e, s, m;
	
	scanf("%d %d %d", &e, &s, &m);
	
	for (i = 1;; i++)
	{
		if (i % 15 == e % 15 && i % 28 == s % 28 && i % 19 == m % 19)
		{
			printf("%d", i);
			
			return 0;
		}
	}
	
	return 0;
}
