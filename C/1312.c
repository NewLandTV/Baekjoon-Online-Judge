#include <stdio.h>

int main(void)
{
	int a, b, n;
	int x;
	
	scanf("%d %d %d", &a, &b, &n);
	
	while (n--)
	{
		a = (a % b) * 10;
		x = a / b;
	}
	
	printf("%d", x);
	
	return 0;
}
