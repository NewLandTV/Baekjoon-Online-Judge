#include <stdio.h>

#define ll long long

int main(void)
{
	int i;
	int t;
	int n;
	ll a, b, c, p;
	ll curA, curB, curC, sum;
	int yes;
	
	scanf("%d", &t);
	
	while (t--)
	{
		scanf("%d", &n);
		
		for (i = curA = curB = curC = 0, sum = yes = 1; i < n; i++)
		{
			scanf("%lld %lld %lld %lld", &a, &b, &c, &p);
			
			if (curA < a)
			{
				sum += a - curA;
				curA += a - curA;
			}
			if (curB < b)
			{
				sum += b - curB;
				curB += b - curB;
			}
			if (curC < c)
			{
				sum += c - curC;
				curC += c - curC;
			}
			
			if (sum > p)
			{
				yes = 0;
			}
			
			sum++;
		}
		
		printf("%s\n", yes ? "YES" : "NO");
	}
	
	return 0;
}
