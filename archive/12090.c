#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "");
    
    int i;
    wchar_t s[101];
    int index;
    const char* cho[19] = { "ぁ", "あ", "い", "ぇ", "え", "ぉ", "け", "げ", "こ", "さ", "ざ", "し", "じ", "す", "ず", "せ", "ぜ", "そ", "ぞ" };
    
    wscanf(L"%ls", s);
    
    for (i = 0; i < wcslen(s); i++)
    {
    	s[i] -= 0xAC00;
    	index = s[i] / 588;
        
        printf("%s", cho[index]);
    }
    
    return 0;
}
