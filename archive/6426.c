#include <stdio.h>

Pair* MakePair(char* key, int value);

int main(void)
{
	int t;
	int z, i, m, l;
	int originL;
	int period;
	
	for (t = 1; ; t++)
	{
		scanf("%d %d %d %d", &z, &i, &m, &l);
		
		if (z == 0 && i == 0 && m == 0 && l == 0)
		{
			break;
		}
		
		originL = l;
		
		for (period = 1; ; period++)
		{
			printf("<%d>\n", l);
			l = (z * l + i) % m;
			
			if (l == originL)
			{
				break;
			}
		}
		
		printf("Case %d: %d\n", t, period);
	}
	
	return 0;
}
