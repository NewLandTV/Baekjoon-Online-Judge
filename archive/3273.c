#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;
	int n;
	int* a;
	int x;
	int* temp;
	int total = 0;
	
	scanf("%d", &n);
	
	a = (int*)malloc(sizeof(int) * n);
	temp = (int*)malloc(sizeof(int) * 2000000);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	scanf("%d", &x);
	
	for (i = 0; i < n; i++)
	{
		temp[a[i]]++;
		
		if (x - a[i] >= 0 && temp[x - a[i]] == 1)
		{
			total++;
			temp[a[i]] = 0;
			temp[x - a[i]] = 0;
		}
	}
	
	free(a);
	free(temp);
	printf("%d", total);
	
	return 0;
}
