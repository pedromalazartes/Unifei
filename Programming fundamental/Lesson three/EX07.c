#include <stdio.h>

int main()
{	
	float bbigger, bsmaller, height, area;

	printf("Digite os valores das bases menor e maior:\n");
	scanf("%f%f", &bbigger, &bsmaller);

	printf("Digite o valor da altura: ");
	scanf("%f", &height);

	area = (bbigger + bsmaller) * height / 2;
	
	printf("Area do trapezio: %f\n ", area); 

	return 0;
}
