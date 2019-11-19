/*сумма отрезков степенного ряда*/
#include <stdio.h>

void	main()
{
	double g, c, p;
	int i, n;
	printf("\n Vvelite znachenie g=");
	scanf("%lf", &g);
	while (1)
	{
		printf("Vvedi znachenie n=");
		scanf("%d", &n);
		if (n > 0) break;
		printf("Oshibochke! n doljno bit >0! \n");
	}
	for (c =0.0, p =1.0, i = 1; i <= n; i++)
	{
		p *= g;
		c += p;
	}
	printf("\n Sum c = %f", c);
}
