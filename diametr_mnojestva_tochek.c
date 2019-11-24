/*function for calculating the distance between two points*/
#include <stdio.h>
#include <math.h>

#define K_MAX 100 /*Ограничение на размерность пространства*/
#define N_MAX 10 /*Ограничение на количество точек*/
float	distance(float x[], float y[], int n)
{
	int i;
	float r, s = 0.0;
	for (i = 0; i < n; i++)
	{
		r = y[i] - x[i];
		s += r*r;
	}
	s = sqrt(s);
	return (s);
}

void	main()
{
	float dist, dist_max, d;
	int i, j ,i_max, m_max, n, k, m;
	float  a[K_MAX][N_MAX];

	while(1)
	{
		printf("\nKolichestvo tochek k =");
		scanf("%d", &k);
		printf("Razmernost prostranstva n =");
		scanf("%d", &n);
		if (k > 0 && k <= K_MAX && n > 0 && n <= N_MAX)
			break ;
		printf("Erorr!");
	}
	for (i = 0; i < k; i++) /*Чикл ввода координат точек*/
	{
		printf("Write %d coordinats" "points %d: \n", n, i + 1);
		for (j = 0; j < n; j++) /*чикл ввода координат одной точки*/
			scanf("%f", &a[i][j]);
	}
	dist_max = 0.0;
	i_max = 0;
	m_max = 0;
	for (i = 0; i < k; i++) /*Цикл сравнения точек*/
	{
		for (m = i+1; m < k; m++)
		{
			dist = distance(a[i], a[m], n);
			if (dist > dist_max)
			{
				dist_max = dist;
				i_max = i;
				m_max = m;
			}
		}
	}
	printf("Resoult:\n Diametr = %f", dist_max);
	printf("\n Nomber of points : %d, %d", i_max + 1, m_max + 1);
}
