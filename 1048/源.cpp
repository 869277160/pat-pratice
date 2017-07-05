#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

void reverse(char s[])
{
	int len = strlen(s);
	int i;
	for ( i=0;i<len/2;i++)
	{
		int temp=s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
}

int main()
{
	char a[110], b[110],ans[110] = { 0 };
	scanf("%s %s",a, b);
	reverse(a);
	reverse(b);
	int lena = strlen(a);
	int lenb = strlen(b);
	int len = lena > lenb ? lena : lenb;
	int i;
	for (i = 0; i < len; i++)
	{
		int numa = i < lena ? a[i] - '0' : 0;
		int numb = i < lenb ? b[i] - '0' : 0;
		if (i%2==0)
		{
			int temp = (numa + numb) % 13;
			if (temp == 10) ans[i] = 'J';
			else if (temp == 11) ans[i] = 'Q';
			else if (temp == 12) ans[i] = 'K';
			else ans[i] = temp + '0';
		}
		else
		{
			int temp = numb - numa;
			if (temp < 0)  temp += 10;
			ans[i] = temp + '0';
		}
		
	}
	reverse(ans);
	puts(ans);
	return 0;
}






