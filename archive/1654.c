#include <stdio.h>
#include <memory.h>

int Sort();

int main(void)
{
	int i;
	int k, n;
	int* l;
	int x;
	int temp;
	
	scanf("%d %d", &k, &n);
	
	l = (int*)malloc(sizeof(int) * k);
	
	for (i = 0; i < k; i++)
	{
		scanf("%d", &l[i]);
	}
	
	return 0;
}
