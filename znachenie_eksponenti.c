/*Приближенное значение экспоненты*/
#include <stdio.h>
void	main()
{
	int i;
	double eps, b =1.0, r, x;
	printf("\n Vedi x=");
	scanf("%lf", &x);
	do{
		printf("\n vedi tochnost eps=");
		scanf("&lf", &eps);
	}
	while (eps <= 0.0) ;
	for (i = 2, r =x; r > eps || r < -eps; i++)
	{
		b = b + r;
		r = r * x / i;
	}
	printf("Res is:  %f\n", b);
	printf("Pogreshnost:  %f\n", r);
	printf("Chislo chlenov rada:  %d\n", i);
}
