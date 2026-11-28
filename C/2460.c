#include <stdio.h>

#define Max(a, b) ((a) > (b) ? (a) : (b))

int main(void)
{
	int i;
	int getOff, getOn;
	int population = 0;
	int max = 0;
	
	for (i = 0; i < 10; i++)
	{
		scanf("%d %d", &getOff, &getOn);
		
		population += getOn - getOff;
		max = Max(population, max);
	}
	
	printf("%d", max);
	
	return 0;
}
