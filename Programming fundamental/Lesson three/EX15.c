#include <stdio.h>

int main()
{	
	float km, vm, h;

	printf("Digite a distancia em km: ");
	scanf("%f", &km);
	
	printf("Digite o tempo em horas: ");
	scanf("%f", &h);

	vm = km / h;

	printf("Velocidade media: %.1f km/h \n", vm);

	return 0;
}
