#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int putA=0, putB=0;
	int num;
	scanf("%d", &num);
	int i = 0;
	for (i = 0; i < num; i++)
	{
		int a1, a2, b1, b2;
		scanf("%d%d%d%d", &a1, &a2, &b1, &b2);
		if (a1 + b1 == a2 &&a1 + b1 != b2 ) putB++;
		if (a1 + b1 == b2 &&a1 + b1 != a2 ) putA++;
	}
	printf("%d %d", putA, putB);
}