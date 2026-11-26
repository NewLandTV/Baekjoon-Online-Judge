#include <stdio.h>

int main(void)
{
	int i;
	int n;
	char answer[101];
	int scores[3] = { 0, };
	int max = 0;
	const char* names[3] = { "Adrian", "Bruno", "Goran" };
	
	scanf("%d", &n);
	scanf("%s", answer);
	
	for (i = 0; i < n; i++)
	{
		// 상근: A, B, C, A, B, C, A, B, C, ...
		if (answer[i] == 'A' + (i % 3))
		{
			scores[0]++;
		}
		
		// 창영: B, A, B, C, B, A, B, C, B, A, B, C, ...
		if (answer[i] == 'A' + (i & 1 ? ((i + 1) % 4 == 0 ? 2 : 0) : 1))
		{
			scores[1]++;
		}
		
		// 현진: C, C, A, A, B, B, C, C, A, A, B, B, ...
		if (answer[i] == 'A' + (i % 6 < 2 ? 2 : (i % 6 > 3)))
		{
			scores[2]++;
		}
	}
	
	for (i = 0; i < 3; i++)
	{
		if (scores[i] > max)
		{
			max = scores[i];
		}
	}
	
	printf("%d\n", max);
	
	for (i = 0; i < 3; i++)
	{
		if (max == scores[i])
		{
			printf("%s\n", names[i]);
		}
	}
	
	return 0;
}
