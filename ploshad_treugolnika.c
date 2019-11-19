/*Площадь треугольника по формуле Герона   S=sqrt(p(p-A)(p-B)(p-C)*/
#include <stdio.h>
#include <stdlib.h>

float	ab(float z);
float	sqr(float);

int	main()
{
	float a,b,c,p,s;
	printf("\n Storona a= ");
	scanf("%f", &a);
	printf("\n Storona b= ");
	scanf("%f", &b);
	printf("\n Storona c= ");
	scanf("%f", &c);
	if (a+b <= c || a+c <= b || b+c <= a)
	{
		printf("Treugolnik postroit nelza");
		return ;
	}
	p = (a + b + c)/2;
	s = sqr(p*(p - a)*(p - b)*(p - c));
	printf ("Ploshad treugolnika: %f", s);
	return (0);
}

float	sqr(float x)
{
	double r, q;
	const double REL=0.00001; /*относительная точность*/
	if (x < 0.0)
	{
		printf ("\nOtric podkorenoe");
		exit(1);
	}
	if (x == 0.0) return x;
	r = x;
	do
	{
		q = r;
		r = (q+x/q)/2;
	}
	while (ab((r-q)/r) > REL);
	return (r);
}

float	ab(float z)
{
	if (z > 0) return z;
	else return(-z);
}
