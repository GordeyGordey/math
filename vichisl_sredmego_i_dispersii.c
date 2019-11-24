/*Вычисление среднего и дисперсии*/
#include <stdio.h>

void	main()
{
	int i;
	int j;
	int n; /*number of elements*/
	float a, b, d, x[100], e; /*b- average, d - ocenka dispersii a,e- vspomog;*/
	while (1)
	{
		printf("\n Vvedite znachenie n=");
		scanf("%d", &n);
		if (n > 0 && n <= 100)
			break ;
		printf("\n Erorr! u need 0<n<101 ");
	}
	printf ("Vvedite znachenie elements: \n");
	for (b = 0.0, i = 0; i < n; i++)
	{
		printf("x[%d] = ", i);
		scanf("%f", &x[i]);
		b += x[i]; /*Sum of elements*/
	}
	b /= n; /*Averge*/
	for (j = 0, d = 0.0; j < n; j++)
	{
		a = x[j] - b;
		d += a*a;
	} /*Ocenka dispersii*/
	d /= n;
	printf ("\n Average = %f, dispersion = %f", b,d);
}