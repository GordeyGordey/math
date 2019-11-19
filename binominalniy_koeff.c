/*Функция для вычисления биноминального коэффициента*/
#include <stdio.h>
int	fact(int k)
{
	int i;
	int j;

	i = 1;
	j = 1;
	while (i <= k)
	{
		j *= i;
		i++;
	}
	return (j);
}

int main()
{
	int n;
	int m;
	int nmc;	/*значение биноминального коэффициента*/
	int nm;		/* значение (n-m)*/
	while (1)
	{
		printf("\n Vedite n=");
		scanf("%d", &n);
		printf("\n Vedite m=");
		scanf("%d", &m);
		if ( m >= 0 &&n >= m && n < 10) break;
			printf("Oshibka! nujno 0 <= m <= n < 10");
	}
	nm = n-m;
	nmc = fact(n)/fact(m)/fact(nm);
	printf ("\nBinominalniy koeff =%d", nmc);
	return (0);
}
