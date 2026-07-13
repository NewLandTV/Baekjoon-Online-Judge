#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 200000

typedef struct
{
	char name[21];
	int t;
} Driver, *PDriver;

Driver drivers[MAX];
char* nameList[MAX];
int cnt;

void Insert(char* name[]);
int Compare(const void* a, const void* b);

int main(void)
{
	int i, j;
	int n, t;
	
	scanf("%d %d", &n, &t);
	
	for (i = 0; i < n; i++)
	{
		scanf("%s %d", drivers[i].name, &drivers[i].t);
		
		if (i == 0)
		{
			continue;
		}
		
		if (drivers[i].t % t > 0 && drivers[i].t % t <= 1000)
		{
			Insert(&drivers[i].name);
		}
		
		drivers[i].t = (drivers[i - 1].t - drivers[i].t) % t;
		
		if (drivers[i].t < 0)
		{
			drivers[i].t += t;
		}
	}
	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if ((drivers[i].t < drivers[j].t && drivers[i].t + 1000 >= drivers[j].t) || (drivers[j].t == 0 && drivers[i].t > t - 1000))
			{
				Insert(&drivers[i].name);
				
				break;
			}
		}
	}
	
	if (cnt == 0)
	{
		printf("-1");
		
		return 0;
	}
	
	qsort(nameList, cnt, sizeof(char*), Compare);
	
	for (i = 0; i < cnt; i++)
	{
		printf("%s ", nameList[i]);
	}
	
	return 0;
}

void Insert(char* name[])
{
	int i;
	
	for (i = 0; i < cnt; i++)
	{
		if (strcmp(nameList[i], name) == 0)
		{
			return;
		}
	}
	
	nameList[cnt++] = name;
}

int Compare(const void* a, const void* b)
{
	return strcmp(*(char**)a, *(char**)b);
}
