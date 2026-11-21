#include <stdio.h>

#define Max(a, b) ((a) > (b) ? (a) : (b))

int main(void)
{
	int l, r, k; 
	
	scanf("%d", &l);
	scanf("%d", &r);
	scanf("%d", &k);
	
	switch (k)
	{
	case 2:
		printf("%d", Max(r - Max(l, 3) + 1, 0));
		
		break;
	case 3:
		printf("%d", Max(r / 3 - (Max(l, 6) - 1) / 3, 0));
		
		break;
	case 4:
		printf("%d", Max((r >> 1) - ((Max(l, 14) - 1) >> 1), 0) + (l <= 10 && r >= 10));	// 닫힌구간 [l, r] 에 10이 있으면 10도 고려하여 1을 추가함. 
		
		break;
	case 5:
		printf("%d", Max(r / 5 - (Max(l, 15) - 1) / 5, 0));
		
		break;
	}
	
	return 0;
}
