#include <stdio.h>

int main()
{	
	int nasc, atual, diference, ano, mes, dia;

	printf("Digite o ano de nascimento: ");
	scanf("%d", &nasc);
	
	printf("Digite o ano em que estamos: ");
	scanf("%d", &atual);

	diference = atual - nasc;

	ano = diference;
	
	printf("Idade em anos: %d\n", ano);

	mes = ano * 12;

	printf("Idade em meses: %d\n", mes);

	dia = ano * 365;

	printf("Idade em dias: %d\n", dia);


	return 0;
}
