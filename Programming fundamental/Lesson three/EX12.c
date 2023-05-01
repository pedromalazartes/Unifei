#include <stdio.h>

int main()
{	
	float pay, newpay;
	
	printf("Digite o salario do funcionario: ");
	scanf("%f", &pay);

	newpay = pay * 1.2;
	
	printf("Novo salario: R$ %.2f\n", newpay);	
	
	return 0;
}
