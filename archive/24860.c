#include <stdio.h>

int main(void)
{
	int vk, jk;
	int vl, jl;
	int vh, dh, jh;
	unsigned long long result;
	
	scanf("%d %d", &vk, &jk);
	scanf("%d %d", &vl, &jl);
	scanf("%d %d %d", &vh, &dh, &jh);
	printf("%llu", vk * jk * vh * dh * jh + vl * jl * vh * dh * jh);
	
	return 0;
}
