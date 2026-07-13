#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_SITE_NUMBER 100001

typedef struct _Site
{
	char password[21];
} Site, *PSite;

int Hash(char* s);

int main(void)
{
	int n, m;
	PSite sites;
	char url[21];
	
	scanf("%d", &n, &m);
	
	sites = (PSite)malloc(sizeof(Site) * MAX_SITE_NUMBER);
	
	while (n--)
	{
		rewind(stdin);
		scanf("%s", url);
		scanf("%s", sites[Hash(url)]);
	}
	
	while (m--)
	{
		rewind(stdin);
		scanf("%s", url);
		printf("%s\n", sites[Hash(url)]);
	}
	
	free(sites);
	
	return 0;
}

int Hash(char* s)
{
	int i;
	int hash = 0;
	int p = 1;
	
	for (i = 0; i < strlen(s); i++)
	{
		hash = ((hash + s[i] - 'a' + 1) * p) % MAX_SITE_NUMBER;
		p = (p * 53) % MAX_SITE_NUMBER;
	}
	
	return hash;
}
