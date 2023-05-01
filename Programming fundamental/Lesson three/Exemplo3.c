#include <stdio.h>

int main()
{	
	float tempc, tempf;

	printf("informe a temperatura em Fahrenheit: \n");
	scanf("%f", &tempf);

	tempc = (tempf-32)/1.8;

	printf("está %0.1f°C\n", tempc);

	return 0;
}
