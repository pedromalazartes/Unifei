#include <stdio.h>

int main ()
{	
	float real, part5;

	printf("Digite um numero real: ");
	scanf("%f", &real);

	part5 = real / 5;

	printf("Resposta: %.2f\n", part5);

	return 0;
}
