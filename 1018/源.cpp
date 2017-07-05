#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

typedef struct figure
{
	int b;
	int c;
	int j;
}F;

int main()
{
	int win1=0, win2=0;
	int equ1=0, equ2=0;
	int fail1=0, fail2=0;
	F f1, f2;
	f1.b = 0;
	f1.c = 0;
	f1.j = 0; 
	f2.b = 0;
	f2.c = 0;
	f2.j = 0;
	int num;
	scanf("%d", &num);
	int i;
	for (i = 0; i < num; i++)
	{
		char temp1, temp2;
		scanf("%c%c", &temp1, &temp2);
		if (temp1 == 'C')
		{
			if (temp2 == 'B')
			{
				win2++;
				fail1++;
				f2.b++;
			}
			if (temp2 == 'C')
			{
				equ1++;
				equ2++;
			}
			if (temp2 == 'J')
			{
				win1++;
				fail2++;
				f1.c++;
			}
		}
		if (temp1 == 'J')
		{
			if (temp2 == 'B')
			{
				win1++;
				fail2++;
				f1.j++;
			}
			if (temp2 == 'C')
			{
				win2++;
				fail1++;
				f2.c++;
			}
			if (temp2 == 'J')
			{
				equ1++;
				equ2++;
			}
		}
		if (temp1 == 'B')
		{
			if (temp2 == 'B')
			{
				equ1++;
				equ2++;
			}
			if (temp2 == 'C')
			{
				win1++;
				fail2++;
				f1.b++;
			}
			if (temp2 == 'J')
			{
				win2++;
				fail1++;
				f2.j++;

			}
		}
		
	}

	printf("%d %d %d\n", win1, equ1, fail1);
	printf("%d %d %d\n", win2, equ2, fail2);
	char temp1, temp2;
	if (f1.b >= f1.c&&f1.b >= f1.j)
	{
		temp1 = 'B';
	}
	if (f2.b >= f2.c&&f2.b >= f2.j)
	{
		temp2 = 'B';
	}
	if (f1.c >= f1.b&&f1.c >= f1.j)
	{
		if (f1.b == f1.c)
		{
			temp1 = 'B';
		}
		else temp1 = 'C';
	}
	if (f2.c >= f2.b&&f2.c >= f2.j)
	{
		if (f2.b == f2.c)
		{
			temp2 = 'B';
		}
		else temp2 = 'C';
	}
	if (f1.j >= f1.b&&f1.j >= f1.c)
	{
		if (f1.j == f1.c)
		{
			if (f1.j == f1.c&&f1.j == f1.b)
			{
				temp1 == 'B';
			}
			else temp1 == 'C';
		}
		else temp1 = 'J';
	}	
	if (f2.j >= f2.b&&f2.j >= f2.c)
	{
		if (f2.j == f2.c)
		{
			if (f2.j == f2.c&&f2.j == f2.b)
			{
				temp2 == 'B';
			}
			else temp2 == 'C';
		}
		else temp2 = 'J';
	}


	printf("%c %c", temp1, temp2);


}