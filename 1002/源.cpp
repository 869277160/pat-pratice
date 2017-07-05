#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>


int main(void)
{
	int sum = 0;
	char total[120];
	char numbers[10][5] = { "ling","yi","er","san","si","wu","liu","qi","ba","jiu" };
	scanf("%s", &total);
	int i;
	for (i = 0; i < strlen(total); i++)
	{
		sum = sum + total[i] - 48;
	}
	//printf("%d\n", sum);
	//getchar();
	int unitPlace = sum / 1 % 10;
	int tenPlace = sum / 10 % 10;
	int hundredPlace = sum / 100 % 10;
	//printf("\n");
	if (hundredPlace == 0 && tenPlace == 0)
	{
		if (tenPlace != 0)
		{
			printf("%s %s\n",numbers[tenPlace], numbers[unitPlace]);
			
		}
		else printf("%s\n", numbers[unitPlace]);
		
	}
	else printf("%s %s %s\n", numbers[hundredPlace], numbers[tenPlace], numbers[unitPlace]);
	getchar(); getchar(); getchar();
}