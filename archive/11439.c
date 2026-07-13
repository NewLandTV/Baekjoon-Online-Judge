#include <stdio.h>
#include <stdlib.h>

#define llu unsigned long long
#define MOD 1000000007
#define Inverse(n, mod) Pow(n, mod - 2, mod)

int m;
llu f[4000001];

llu Combination(int n, int r);
llu Pow(llu base, int exp, int mod);

int main(void)
{
	int i;
	int n, k;
	char a[8], b[8];
	llu x;
	int result = 1;
	
	scanf("%d %d %d", &n, &k, &m);
	
	for (f[0] = i = 1; i <= n; i++)
	{
		f[i] = f[i - 1] * i % m;
	}
	
	itoa(n, a, m);
	itoa(k, b, m);
	
	printf("N: %d -> %s, K: %d -> %s", n, a, k, b);
	
	for (i = 0; a[i]; i++)
	{
		x = Combination(a[i] - '0', b[i] - '0');
		
		printf("%cC%c = %lld\n", a[i], b[i], x);
		
		if (x != 0)
		{
			result *= x % m;
		}
	}
	
	printf("%d", result % m);
	
	return 0;
}

llu Combination(int n, int r)
{
	if (r == 0 || n == r)
	{
		return 1;
	}
	
	if (r == 1)
	{
		return n;
	}
	
	llu k = f[r] * f[n - r] % m;
	
	return f[n] * Inverse(k, m) % m;
}

llu Pow(llu base, int exp, int mod)
{
	llu x = 1;
	
	for (; exp; exp >>= 1, base = base * base % mod)
	{
		if (exp & 1)
		{
			x = x * base % mod;
		}
	}
	
	return x;
}
