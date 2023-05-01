#include <stdio.h>
#include <math.h>
	
int main()
{	
	float rad, grau;

	printf("Digite o valor do angulo em graus: ");
	scanf("%f", &grau);

	rad = grau * ( acos(-1) / 180);

	printf("Angulo em radianos: %f\n", rad);

	return 0;
}
