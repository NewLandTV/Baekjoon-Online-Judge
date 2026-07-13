#include <stdio.h>
#include <string.h>

void Add(char* a, char* b);
void Subtract(char* a, char* b);
void Multiply(char* a, char* b);

int main(void)
{
	char a[1002];
	char b[1002];
	
	scanf("%s", &a);
	scanf("%s", &b);
	Add(a, b);
	Subtract(a, b);
	Multiply(a, b);
	
	return 0;
}

void Add(char* a, char* b)
{
	int i;
	int carry;
	char result[1002];
	
	for (i = 0; i < strlen(a) && i < strlen(b); i++)
	{
		carry = a[i] + b[i] - 96;
		result[i] = carry >= 10 ? carry % 10 : carry + 48;
		result[i + 1] ;
	}
	
	printf("%s", result);
}

void Subtract(char* a, char* b)
{
	
}

void Multiply(char* a, char* b)
{
	
}
