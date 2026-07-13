#include <stdio.h>
#include <stdlib.h>

#define Max(a, b) ((a) > (b) ? (a) : (b))

typedef struct
{
	int t, a, b;
} Data;

int n, d;
int t[200000], a[200000], b[200000];
int s;

int Compare(const void* a, const void* b)
{
	Data* x = (Data*)a;
	Data* y = (Data*)b;
	
	if (x->t != y->t)
	{
		return x->t - y->t;
	}
	
	return 0;
}

void Backtrack(int start, int time, int maxA, int maxB)
{
	int i;
	int f;
	
	if (time <= d)
	{
		s = Max(s, maxA + maxB);
	}
	
	for (i = start; i < n; i++)
	{
		f = time + t[i];
		
		if (time > d)
		{
			return;
		}
		
		Backtrack(i + 1, f, Max(maxA, a[i]), Max(maxB, b[i]));
	}
}

int main(void)
{
	int i;
	
	scanf("%d %d", &n, &d);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d %d %d", &t[i], &a[i], &b[i]);
	}
	
	Backtrack(0, 0, 0, 0);
	printf("%d", s);
	
	return 0;
}
