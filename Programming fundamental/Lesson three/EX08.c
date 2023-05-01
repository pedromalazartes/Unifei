#include <stdio.h>
#include <math.h>

int main()
{
	float raio, area;

	printf("Digite o valor do raio: ");
	scanf("%f", &raio);

	area = acos(-1) * (raio * raio);
	
	printf("Area do circulo: %f\n", area);
	
	return 0;
}
