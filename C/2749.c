#include <stdio.h>

int fibo[1500000];

int main(void)
{
	int i;
	unsigned long long n;
	
	fibo[0] = 0;
	fibo[1] = 1;
	
	scanf("%llu", &n);
	
	for (i = 2; i < 1500000; i++)
	{
		fibo[i] = (fibo[i - 1] + fibo[i - 2]) % 1000000;
	}
	
	printf("%d", fibo[n % 1500000]);
	
	return 0;
}
