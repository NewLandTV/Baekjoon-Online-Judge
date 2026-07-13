#include <stdio.h>

int main(void)
{
	int i;
	int n;
	int a[50];
	int s;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	scnf("%d", &s);
	
	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	
	return 0;
}
