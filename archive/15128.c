#include <stdio.h>

int main(void)
{
	int p1, q1, p2, q2;
	
	scanf("%d %d %d %d", &p1, &q1, &p2, &q2);
	printf("%d", (p1 * p2 % (q1 * q2 * 2) == 0));
	
	return 0;
}
