#include <stdio.h>

int main(void)
{
	int a, b, c;
	
	scanf("%d %d %d", &a, &b, &c);
	
	if (a + b == c || a + c == b || b + c == a)
	{
		printf("1");
	}
	else if (a * b == c || a * c == b || b * c == a)
	{
		printf("2");
	}
	else
	{
		printf("3");
	}
	
	return 0;
}
