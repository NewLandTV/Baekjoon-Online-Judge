#include <stdio.h>

int main(void)
{
	int i, j;
	int t;
	char message[101];
	char pattern[27];
	
	scanf("%d", &t);
	
	for (i = 0; i < t; i++)
	{
		scanf(" %[^\n]s", message);
        scanf("%s", pattern);
		
		for (j = 0; message[j]; j++)
		{
			if (message[j] == ' ')
			{
				fputc(' ', stdout);
				
				continue;
			}
			
			fputc(pattern[message[j] - 65], stdout);
		}
		
		fputc('\n', stdout);
	}
	
	return 0;
}
