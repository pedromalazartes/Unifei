#include <stdio.h>

int main()
{	
	float price, newprice;

	printf("Digite o valor de um produto: ");
	scanf("%f", &price);

	newprice = price * 0.88;

	printf("Valor final com desconto: R$ %.2f\n", newprice); 	

	return 0;
}
