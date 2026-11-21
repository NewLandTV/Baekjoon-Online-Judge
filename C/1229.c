#include <stdio.h>

int dp[146859];

int main(void)
{
	int i, j;
	int n;
	int h[708];	// 육각수 수열  h_n = n(2n - 1)
	int m = 0;	// n 이하 육각수의 개수 
	
	scanf("%d", &n);
	
	for (i = 1;; i++, m++)
	{
		if ((h[i - 1] = i * (i * 2 - 1)) > n)
		{
			break;
		}
		
		// n이 육각수이면 1을 출력 
		if (h[i - 1] == n)
		{
			printf("1");
			
			return 0;
		}
	}
	
	for (i = 0; i < m; i++)
	{
		for (j = i; j < m; j++)
		{
			// n이 두 개의 육각수의 합으로 이루어지면 2를 출력 
			if (n == h[i] + h[j])
			{
				printf("2");
				
				return 0;
			}
		}
	}
	
	// 이외의 146858을 초과할 때, 항상 3개의 육각수로 만들 수 있다.
	if (n > 146858)
	{
		printf("3");
		
		return 0;
	}
	
	for (dp[0] = 0, i = 1; i <= n; i++)
	{
		dp[i] = 6;
	}
	
	for (i = 0; i < m; i++)
	{
		for (j = h[i]; j <= n; j++)
		{
			if (dp[j - h[i]] + 1 < dp[j])
			{
				dp[j] = dp[j - h[i]] + 1;
			}
		}
	}
	
	printf("%d", dp[n]);
	
	return 0;
}
