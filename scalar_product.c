/*скалярное произведение векторов*/
#include <stdio.h>
# define MAX_INDEX 5

int	main()
{
	float	scalar_product(int, float [], float []);
	int i;
	int n;
	float x[MAX_INDEX];
	float y[MAX_INDEX];
	printf("\n RAZMERNOST VEKTOROV n= ");
	scanf("%d", &n);
	if (n < 1 || n > MAX_INDEX)
	{
		printf("\n OSHIBKA");
		return ;
	}
	printf("VEDITE %d KOORDIN x: ", n);
	for (i = 0; i < n; i++)
		scanf("%f", &x[i]);
	printf("VEDITE %d KOORDIN y: ", n);
	for (i = 0; i < n; i++)
		scanf("%f", &y[i]);
	printf("\n RES: %7.3f", scalar_product(n, x, y));
	return (0);
}

float	scalar_product(int n, float a[], float b[])
/*Скалярное произведение n-мерных векторов*/
/* n - размерность пространства векторов*/
/* a[], b[] - мфссивы координат векторов*/
{
	int i; /*параметр цикла*/
	double z; /*формируемая сумма*/
	for (i = 0, z = 0.0; i < n; i++)
		z += a[i]*b[i];
		return (z);
}