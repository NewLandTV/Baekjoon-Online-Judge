#include <stdio.h>
#include <memory.h>
#include <stdlib.h>

#define MAX_LEN 1000000000

#define Max(a, b) ((a) > (b) ? (a) : (b))

short indexes[5000][5000];

int main(void)
{
	int i;
	int n, k;
	int a;
	short* counts;
	char* check;
	int nums[5000] = { 0, }, m = 0;
	int l, r, maxLen = 1;
	
	scanf("%d %d", &n, &k);
	
	counts = (short*)calloc(MAX_LEN, sizeof(short));
	check = (char*)calloc(MAX_LEN, sizeof(char));
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a);
		
		indexes[--a][counts[a]++] = i;
		
		if (!check[a])
		{
			check[a] = 1;
			nums[m++] = a;
		}
	}
	
	free(check);
	
	for (i = 0; i < m; i++)
	{
		for (r = 0, a = nums[i]; r < counts[a]; r++)
		{
			for (l = 0; indexes[a][r] - indexes[a][l] - r + l > k; l++);
			
			maxLen = Max(r - l + 1, maxLen);
		}
	}
	
	free(counts);
	printf("%d", maxLen);
	
	return 0;
}
