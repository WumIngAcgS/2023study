#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<ctype.h>
int main()
{
	char ch = 'a';
	/*ch = toupper(ch);*/
	toupper(ch);
	printf("%c\n", ch);



	while (getchar() != '\n');


	return 0;
}