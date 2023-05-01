#include <stdio.h>

int main()
{
	float num1, num2, num3, soma;

	printf("Digite 3 valores: \n");
	scanf("%f%f%f", &num1, &num2, &num3);
	
	soma = num1 + num2 + num3;

	printf("Soma dos valores: %f \n", soma);

	return 0;
}
