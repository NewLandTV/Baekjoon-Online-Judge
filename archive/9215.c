#include <stdio.h>
#include <string.h>

int main(void)
{
	int i;
	int n;
	char q[15];
	char* ptr;
	int numbers[3];
	
	scanf("%d", &n);
	
	for (i = 1; i <= n; i++)
	{
		scanf("%s", q);
		
		ptr = strtok(q, ",/");
		
		numbers[0] = iota(pt);
		
		ptr = strtok(NULL, ",/");
		
		printf("Test %d: ", i);
	}
	
	return 0;
}
