#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

#define DEBUG 1
int main()
{
#if DEBUG
	printf("cuo wu\n");
#endif
	printf("jie shu");
	return 0;
}