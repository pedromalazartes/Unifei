#include <stdio.h>

int main()
{	
	float tempc, tempf;

	printf("Digite a temperatura em Celsius: ");
	scanf("%f", &tempc);

	tempf = (tempc - 32) / 1.8;
	
	printf("Temperatura em Fahrenheit: %f\n", tempf);
	
	return 0;
}
