#include <stdio.h>

#define Max(a, b) ((a) > (b) ? (a) : (b))

int main(void)
{
	int daytime, evening, weekend;
	double a, b;
	
	scanf("%d", &daytime);
	scanf("%d", &evening);
	scanf("%d", &weekend);
	
	a = (Max(daytime - 100, 0) * 25 + evening * 15 + weekend * 20) * 0.01;
	b = (Max(daytime - 250, 0) * 45 + evening * 35 + weekend * 25) * 0.01;
	
	printf("Plan A costs %.2lf\n", a);
	printf("Plan B costs %.2lf\n", b);
	
	if (a == b)
	{
		printf("Plan A and B are the same price.");
		
		return 0;
	}
	
	printf("Plan %c is cheapest.", a > b ? 'B' : 'A');
	
	return 0;
}
