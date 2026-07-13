#include <stdio.h>

#define Abs(x) (x > 0 ? x : -x)

int main(void)
{
	int testCase;
	int i, j;
	int s;
	char way[6];
	int roadLength;
	int f;
	int arrivalTime;
	int operatingTimes[60];
	int minOperatingTime;
	int currentMinuteTime;
	float roadArrivalTime;
	int finalArrivalHour;
	int finalArrivalMinute;
	int finalArrivalSecond;
	float minSpeed;
	
	for (testCase = 1; ; testCase++)
	{
		scanf("%d", &s);
		
		if (s == 0)
		{
			break;
		}
		
		minOperatingTime = 60;
		currentMinuteTime = 0;
		finalArrivalHour = 0;
		finalArrivalMinute = 0;
		finalArrivalSecond = 0;
		minSpeed = 80.0f;
		
		for (i = 0; i < s; i++)
		{
			scanf("%s %s %s", way, way, way);
			
			if (way[0] == 'r')
			{
				scanf("%d", &roadLength);
				
				roadArrivalTime = roadLength / minSpeed;
				finalArrivalHour += roadArrivalTime;
				finalArrivalMinute += roadArrivalTime * 60;
				finalArrivalSecond += (int)(roadArrivalTime * 60 * 60) % 60;
				currentMinuteTime += finalArrivalMinute;
			}
			else if (way[0] == 'f')
			{
				scanf("%d %d", &arrivalTime, &f);
				
				finalArrivalMinute += arrivalTime;
				
				for (j = 0; j < f; j++)
				{
					scanf("%d", &operatingTimes[j]);
					
					if (Abs(operatingTimes[j] - currentMinuteTime))
					{
						minOperatingTime = operatingTimes[j];
						minSpeed = 45.0f;
					}
				}
			}
		}
		
		printf("Test Case %d: %02d:%02d:%02d %.2f\n", testCase, finalArrivalHour, finalArrivalMinute, finalArrivalSecond, minSpeed);
	}
	
	return 0;
}
