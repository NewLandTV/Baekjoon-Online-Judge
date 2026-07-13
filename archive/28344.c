#include <stdio.h>
#include <stdlib.h>

int Compare(const void* a, const void* b);

int main(void)
{
	int i;
	int t;
	int n;
	int startIndex, index, reverseIndex, reverse;
	int treasureValues[10000], precedeTeams[10000];
	int team1Sum, team2Sum, precedeTeam;
	
	scanf("%d", &t);
	
	while (t > 0)
	{
		scanf("%d", &n);
		
		for (i = 0; i < n; i++)
		{
			scanf("%d", &treasureValues[i]);
		}
		
		for (i = 0; i < n; i++)
		{
			scanf("%d", &precedeTeams[i]);
		}
		
		qsort(treasureValues, n, sizeof(int), Compare);
		
		startIndex = (n >> 1) - 1;
		index = 0;
		reverseIndex = 0;
		reverse = 0;
		precedeTeam = precedeTeams[0];
		
		for (i = 0; i < n; i++)
		{
			index = startIndex + (reverse ? reverseIndex : index);
			
			if (reverse)
			{
				reverseIndex--;
			}
			else
			{
				index++;
			}
			
			if (precedeTeam == 1)
			{
				team1Sum += treasureValues[index];
			}
			else
			{
				team2Sum += treasureValues[index];
			}
			
			printf("%d %d\n", treasureValues[index], precedeTeam);
			
			if (precedeTeams[i] != precedeTeams[i + 2])
			{
				reverse = !reverse;
			}
		}
		
		t--;
	}
	
	return 0;
}

int Compare(const void* a, const void* b)
{
	int n1 = *(int*)a;
	int n2 = *(int*)b;
	
	if (n1 == n2)
	{
		return 0;
	}
	
	return n1 > n2 ? 1 : -1;
}
