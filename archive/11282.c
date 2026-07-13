#include <stdio.h>
#include <locale.h>

int main(void)
{
	int n;
	
	setlocale(LC_ALL, "korean");
	scanf("%d", &n);
	dprintf(L"%c", (char)(n + 44031));
	
	return 0;
}
