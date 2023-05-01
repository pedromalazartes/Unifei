#include <stdio.h>

int main()
{	
	float tempf, tempc;

	printf("Digite a temperatura em Fahrenheit: ");
	scanf("%f", &tempf);

	tempc = (tempf * 1.8) + 32;

	printf("Temperatura em Celsius: %f\n", tempc);

	return 0;
}
