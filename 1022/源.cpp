#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{

	int c,q=0,i,d,a, b;
	scanf("%d %d %d",&a,&b,&d);
	c = a + b;
	int num[31];
	do
	{
		num[q++] = c%d;
		c /= d;
	} while (c != 0);
	for (i=q-1;i>=0;i--)
		{
		printf("%d", num[i]);
	}
		
}