#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	int i;
	char s[10001], temp[10001], *ptr;
	int sum;
	
	while (fgets(temp, sizeof(temp), stdin) != NULL)
	{
		if (temp[0] == '\n')
		{
			break;
		}
		
		strcat(s, temp);
	}
	
	for (i = 0; i < strlen(s); i++)
	{
		if (s[i] == '\n')
		{
			memcpy(s, "", sizeof(char) * i);
		}
	}
	
	for (sum = atoi(strtok(s, ",")); ptr = strtok(NULL, ","); sum += atoi(ptr));
	
	printf("%d", sum);
	
	return 0;
}
