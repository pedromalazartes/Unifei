#include <stdio.h>

int main()
{	
	int base, height;
	float area;

	printf("Digite os valores da base e da altura:\n");
	scanf("%d%d", &base, &height);
	
	area = (base * height) / 2;

	printf("Area do triangulo: %.2f\n", area);

	return 0;
}
