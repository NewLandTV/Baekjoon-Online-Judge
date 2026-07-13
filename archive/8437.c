#include <stdio.h>

int main(void)
{
	int count, more;
	
	scanf("%d", &count);
	scanf("%d", &more);
	printf("%d\n", count + more >> 1);
	printf("%d", count - more >> 1);
	
	return 0;
}
