#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	char num[1010];
	int puts[10] = {0};
	scanf("%s", num);
	int i;
	for (i = 0; i < strlen(num); i++)
	{
		int temp = num[i] - '0';
		puts[temp]++;
	}
	for (i = 0; i < 10; i++)
	{
		if (puts[i] > 0)
		{
			printf("%d:%d\n", i, puts[i]);
		}
	}
}