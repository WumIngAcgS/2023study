#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

#define max(x,y,z) ((x * y) + z) / 2
int main()
{
	double a = 2, b = 3, c = -1;
	double i = max(a, b, c);
	printf("%.2lf", i);
	return 0;
}