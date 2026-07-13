#include <stdio.h>
#include <math.h>
#include <memory.h>
#include <stdlib.h>

#define ll long long

ll* dp;

ll F(ll n);

int main(void)
{
	ll l, u;
	
	dp = (ll*)malloc(sizeof(ll) * 2000000000);
	
	scanf("%lld %lld", &l, &u);
	printf("%lld", F(u) - F(l - 1));
	free(dp);
	
	return 0;
}

ll F(ll n)
{
	if (n < 0)
	{
		return 0;
	}
	
	if (dp[n])
	{
		return dp[n];
	}
	
	if (n < 10)
	{
		ll s = n * (n + 1) >> 1;
		dp[n] = s;
		
		return s;
	}
	
	int x, digit = 0;
	
	for (x = n; x > 9; x /= 10, digit++);
	
	int i;
	ll s = 0;
	
	for (i = 0; i < x; i++)
	{
		s += pow(10, digit) * i;
	}
	
	ll p = F(pow(10, digit) - 1), q = n - pow(10, digit) * x;
	
	s += F(q) + (p + q + 1) * x;
	dp[n] = s;
	
	return s;
}
