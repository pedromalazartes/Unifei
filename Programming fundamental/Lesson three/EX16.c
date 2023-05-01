#include <stdio.h>

int main()
{	
	float num1, num2, num3, somaquad;

	printf("Digite tres valores:\n");
	scanf("%f%f%f", &num1, &num2, &num3);

	somaquad = (num1 * num1) + (num2 * num2) + (num3 * num3);

	printf("A soma de seus quadrados eh: %f\n", somaquad);

	return 0;
}
