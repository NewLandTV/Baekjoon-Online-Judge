#include <stdio.h>
#include <time.h>

void ShowDate(int timezoneOffset);

int main(void)
{
	ShowDate(0);
	
	return 0;
}

void ShowDate(int timezoneOffset)
{
	time_t t = time(0);
	
	t += timezoneOffset * 3600;
	
	struct tm* timeStruct = localtime(&t);
	int year = timeStruct->tm_year + 1900;
	char month = timeStruct->tm_mon + 1;
	char day = timeStruct->tm_mday;
	
	printf("%04d-%02d-%02d", year, month, day);
}
