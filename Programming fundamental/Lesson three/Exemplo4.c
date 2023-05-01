#include <stdio.h>

int main()
{	
	float price, newprice;
	
	printf("Insira o valor: \n");
	scanf("%f", &price);
	
	newprice = price * 0.95;	

	printf("o valor com desconto será de %0.2f \n", newprice);

	return 0;
}
