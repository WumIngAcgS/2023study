#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[10] = "ability";
	char* str1 = arr1;
	char arr2[10] = { 0 };
	char* str2 = arr2;
	strcpy(str2, str1);
	printf("%s", str2);
	return 0;
}