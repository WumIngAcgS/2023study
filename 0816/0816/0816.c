#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
char* my_strcat(char* s1, const char* s2)
{
	char* p = s1;
	while (*p)
	{
		p++;
	}
	while (*p++ = *s2++)
		;
	return s1;
}
int main()
{
	char arr1[20] = "abcdefg";
	char* stt = arr1;
	char str[10] = "hhhiiiiii";
	char* sttt = str;
	my_strcat(arr1,str);
	printf("%s\n", arr1);
	return 0;
}