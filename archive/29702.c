#include <stdio.h>

int main(void)
{
	int t;
	long long n;
	long long floor;
	int room;
	
	scanf("%d", &t);
	
	while (t--)
	{
		scanf("%lld", &n);
		
		floor = n;
		room = n - (1 << (n - 1)) + 1;
		
		for (; floor != 1; floor--)
		{
			room = n - (1 << (floor - 1)) + 1;
			
			printf("%d%018d\n", room, floor);
		}
	}
	
	return 0;
}
