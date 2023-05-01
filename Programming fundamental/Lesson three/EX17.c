#include <stdio.h>

int main()
{	
	float num1, num2, num3, soma, quadsoma;

	printf("Digite tres valores:\n");
	scanf("%f%f%f", &num1, &num2, &num3);

	soma = num1 + num2 + num3;
	quadsoma = soma * soma;

	printf("O quadrado da soma eh: %f\n", quadsoma); 
	
	return 0;
}
