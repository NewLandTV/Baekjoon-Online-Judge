#include <stdio.h>
#include <string.h>

int main(void)
{
	int i, j;
	int n;
	char s[11], t[11];
	int sl, tl;
	
	scanf("%d", &n);
	sprintf(s, "%d", n);
	strcpy(t, s);
	
	sl = strlen(s);
	tl = sl;
	
	for (i = 0; ; i++)
	{
		for (j = 0; j < sl; j++)
		{
			if (atoi(t) % (s[j] - '0') != 0)
			{
				break;
			}
		}
		
		if (j == sl)
		{
			break;
		}
		
		if (t[tl] == 0)
		{
			t[tl++] = '0';
			t[tl] = 0;
		}
		else if (t[tl] <= '9')
		{
			t[tl]++;
		}
	}
	
	printf("%s", t);
	
	return 0;
}
