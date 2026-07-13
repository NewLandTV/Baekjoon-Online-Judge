#include <stdio.h>

int GetDoomsday(int year);
int IsLeapYear(int year);
int GetPlusDay(int year, int month, int day);

int main(void)
{
	int year, month, day;
	int doomsday;
	int plusDay;
	int dowIndex;
	char* weekDays[7] = { "sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturday" };
	
	scanf("%d %d %d", &year, &month, &day);
	
	doomsday = GetDoomsday(year);
	plusDay = GetPlusDay(year, month, day);
	dowIndex = (doomsday + plusDay) % 7;
	
	printf("%s", weekDays[dowIndex]);
	
	return 0;
}

int GetDoomsday(int year)
{
	int century = year / 100;
	int yearEnd = year % 100;
	
	int baseDates[4] = { 2, 0, 5, 3 };
	int baseDate = baseDates[century % 4];
	
	int a = yearEnd / 12;
	int b = yearEnd % 12;
	int c = b / 4;
	
	return (baseDate + a + b + c) % 7;
}

int IsLeapYear(int year)
{
	if (year % 400 == 0)
	{
		return 1;
	}
	
	if (year % 100 == 0)
	{
		return 0;
	}
	
	return year % 4 == 0;
}

int GetPlusDay(int year, int month, int day)
{
	int sameDays[12] = { 3, 28, 0, 4, 9, 6, 11, 8, 5, 10, 7, 12 };
	
	if (IsLeapYear(year))
	{
		sameDays[0]++;
		sameDays[1]++;
	}
	
	return (day - sameDays[month - 1]) % 7;
}
