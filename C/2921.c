#include <stdio.h>

int main(void)
{
	int n;
	
	scanf("%d", &n);
	printf("%d", n * (n + 1) * (n + 2) >> 1);
	
	return 0;
}
