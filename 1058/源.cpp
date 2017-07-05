#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int ag, as, sk;
	int bg, bs, bk;
	scanf("%d.%d.%d %d.%d.%d", &ag, &as, &sk, &bg, &bs, &bk);
	int cg, cs, ck;
	ck = sk + bk;
	if (ck > 28)
	{
		ck = ck - 29;
		cs = 1 + as + bs;
		if (cs > 15)
		{
			cs = cs - 17;
			cg = ag + bg + 1;
		}
		else cg = ag + bg;
	}
	else
	{
		cs =  as + bs;
		if (cs > 15)
		{
			cs = cs - 17;
			cg = ag + bg + 1;
		}
		else cg = ag + bg;
	}
	printf("%d.%d.%d", cg, cs, ck);
	return 0;
}