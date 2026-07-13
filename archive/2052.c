#include <stdio.h>
#include <math.h>

int main(void)
{
	int n;
	double result;
	
	scanf("%d", &n);
	
	result = 1 / pow(2, n);
	
	printf("%lf", result);
	
	return 0;
}
