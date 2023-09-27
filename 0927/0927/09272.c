#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>


////给定一个整数数组 nums 和一个整数目标值 target，请你在该
////数组中找出和为目标值 target 的那两个整数，并返回它们的数
//组下标。
//你可以假设每种输入只会对应一个答案，数组中同一个元素在
//答案里不能重复出现。
//你可以按任意顺序返回答案。
//➢ 示例 1：输入：nums = [2, 7, 11, 15], target = 9 输出：[0, 1]解释
//：因为 nums[0] + nums[1] == 9 ，返回[0, 1]

int Fact(int n)    //递归函数 
{
	int res = n;
	if (n > 1)
		res = res * Fact(n - 1);
	return res;
}

void sub_two(int *nums,int sub,int n)
{
	int num=0,n1,n2 ;
	for (n1 = 0; n1 < n; n1++)
	{
		for (n2 = 0; n2 < n; n2++)
		{
			if (nums[n1] + nums[n2] == sub) {
				printf("nums[%d]+nums[%d]=%d\n", n1, n2, sub);
				num = 1;
			}
		}
	}
	if (num = 0)
		printf(" no two array elment can be sum to your number\n");
}

void main()
{
	int n,n1,sub, nums[20];
	printf("Given a number for array(A maximum of 20 numbers can be entered).\n");
	scanf("%d", &n);
	printf("Given an integer array element\n");
	for (n1 = 0; n1 < n; n1++)
	{
		scanf("%d", &nums[n1]);
	}
	printf("array element :");
	for (n1 = 0; n1 < n; n1++)
	{
		printf("%d ", nums[n1]);
	}
	printf("\ntell me a number which is the sum of those two array element\n");
	scanf("%d", &sub);
	sub_two(nums,sub,n);


	return 0;
}