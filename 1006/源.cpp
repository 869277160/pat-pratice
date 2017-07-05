#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int nums;
	scanf("%d", &nums);
	if (nums >= 100)
	{
		int i;
		for (i=0;i<(nums/100);i++)
		{
			printf("B");
		}
		for (i = 0; i < ((nums%100)/10); i++)
		{
			printf("S");
		}
		for (i = 0; i < (nums%10); i++)
		{
			printf("%d", i+1);
		}
		printf("\n");
	}
	if (nums>=10&&nums < 100)
	{
		int i;
		for (i = 0; i < (nums / 10); i++)
		{
			printf("S");
		}
		for (i = 0; i < (nums % 10); i++)
		{
			printf("%d", i + 1);
		}
		printf("\n");
	}
	if (nums <= 9)
	{
		int i;
		for (i = 0; i < nums; i++)
		{
			printf("%d", i + 1);
		}
		printf("\n");
	}
}
