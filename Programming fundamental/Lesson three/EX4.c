#include <stdio.h>

int main()
{		
	float real, quad, cub;
	
	printf("Digite um numero real: ");
	scanf("%f", &real);

	quad = real * real;
	cub = quad * real;
	
	printf("%.0f² = %.f\n", real, quad);
	printf("%.0f³ = %.f\n", real, cub);

	return 0;
}
