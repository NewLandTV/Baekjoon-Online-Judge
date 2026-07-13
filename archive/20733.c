#include <stdio.h>
#include <string.h>

int main(void)
{
	int i, j;
	char s[100];
	char t[34];
	int l;
	int equal = 1;
	
	scanf("%s", s);
	
	l = strlen(s) / 3;
	
	for (i = 0; i < l; i++)
	{
		t[i] = s[i];
	}
	
	for (i = 0; i < l; i++)
	{
		for (j = l; j < l * 2; j++)
		{
			if (t[i] != s[j])
			{
				equal = 0;
				
				break;
			}
		}
		
		if (!equal)
		{
			break;
		}
	}
	
	if (equal)
	{
		printf("%s", t);
		
		return 0;
	}
	
	equal = 1;
	
	for (i = 0; i < l; i++)
	{
		for (j = l; j < l * 2; j++)
		{
			if (t[i] != s[j])
			{
				equal = 0;
				
				break;
			}
		}
		
		if (!equal)
		{
			break;
		}
	}
	
	if (equal)
	{
		printf("%s", t);
		
		return 0;
	}
	
	equal = 1;
	
	for (i = l; i < l * 2; i++)
	{
		t[i] = s[i];
	}
	
	for (i = 0; i < l; i++)
	{
		for (j = l; j < l * 2; j++)
		{
			if (t[i] != s[j])
			{
				equal = 0;
				
				break;
			}
		}
		
		if (!equal)
		{
			break;
		}
	}
	
	if (equal)
	{
		printf("%s", t);
		
		return 0;
	}
	
	return 0;
}
