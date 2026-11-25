#include <stdio.h>
#include <string.h>

int IsVowel(char c)
{
	return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main(void)
{
	int i;
	char s[101];
	
	scanf("%[^\n]s", s);
	
	for (i = 0; i < strlen(s); i++)
	{
		if (IsVowel(s[i]))
		{
			printf("%c", s[i]);
			
			i += 2;
			
			continue;
		}
		
		printf("%c", s[i]);
	}
	
	return 0;
}
