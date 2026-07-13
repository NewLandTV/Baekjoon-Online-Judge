#include <stdio.h>
#include <math.h>

#define ll long long

int main(void)
{
	ll n, k;
	ll d, a, b;
	double c;
	
	scanf("%lld %lld", &n, &k);
	
	d = (ll)pow(n, 2) + (n - k + 1) * 4;
	c = pow(d, 0.5);
	a = (n + c) * 0.5;
	b = (n - c) * 0.5;
	
	if (d < 0 || c != (ll)c || a < 0 || b < 0)
	{
		printf("NO");
		
		return 0;
	}
	
	printf("YES");
	
	return 0;
}
