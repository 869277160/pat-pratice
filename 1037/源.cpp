#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


#define s_to_k 29
#define g_to_k 17*29


int main()
{
	int pg, ps, pk;
	int ag, as, ak;
	int cg, cs, ck;
	scanf("%d.%d.%d", &pg, &ps, &pk);
	scanf("%d.%d.%d", &ag, &as, &ak);
	int money = ag*g_to_k + as*s_to_k + ak;
	int price = pg*g_to_k + ps*s_to_k + pk;
	int change = money - price ;
	if (change<0)
	{
		printf("-");
		change = -change;
	}
	cg = change / (g_to_k);
	cs = (change%(g_to_k)) / s_to_k;
	ck = change%s_to_k;
	printf("%d.%d.%d\n", cg,cs,ck);
}

/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define g_to_s 17
#define s_to_k 29
#define g_to_k 17*29


int main()
{
int pg, ps, pk;
int ag, as, ak;
int cg, cs, ck;
int flag = 0;
scanf("%d.%d.%d", &pg, &ps, &pk);
scanf("%d.%d.%d", &ag, &as, &ak);
if (pg>ag)
{
flag = 1;
int temp;
temp = pg;
pg = ag;
ag = temp;
temp = ps;
ps = as;
as = temp;
temp = pk;
pk = ak;
ak = temp;
}
if(pg==ag)
{
if (ps < as)
{
flag = 1;
int temp;
temp = pg;
pg = ag;
ag = temp;
temp = ps;
ps = as;
as = temp;
temp = pk;
pk = ak;
ak = temp;
if(ps==as)
{
if (pk < ak)
{
flag = 1;
int temp;
temp = pg;
pg = ag;
ag = temp;
temp = ps;
ps = as;
as = temp;
temp = pk;
pk = ak;
ak = temp;
}
}

}
}


ck = ak - pk;
if (ck >= 0)
{
cs = as - ps;
if (cs>=0)
{
cg = ag - pg;
}
else
{
cs = cs + 17;
cg = ag - pg - 1;
}
}
else
{
ck = 29 + ck;
cs = as - ps - 1;
if (cs>=0)
{
cg = ag - pg;
}
else
{
cs = cs + 17;
cg = ag - pg - 1;
}
}
if(flag==0)	printf("%d.%d.%d", cg, cs, ck);
else printf("-%d.%d.%d", -cg, cs, ck);
getchar();
}*/