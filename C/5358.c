#include <stdio.h>
#include <string.h>

int main(void)
{
	int i, j;
	char input[100];
	
	for (i = 0; i < 7; i++)
	{
		rewind(stdin);
		scanf("%[^\n]s", input);
		
		for (j = 0; j < strlen(input); j++)
		{
			if (input[j] == 'i')
			{
				fputc('e', stdout);
			}
			else if (input[j] == 'I')
			{
				fputc('E', stdout);
			}
			else if (input[j] == 'e')
			{
				fputc('i', stdout);
			}
			else if (input[j] == 'E')
			{
				fputc('I', stdout);
			}
			else
			{
				fputc(input[j], stdout);
			}
		}
		
		fputc('\n', stdout);
	}
	
	return 0;
}
