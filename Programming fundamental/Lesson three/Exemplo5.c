#include <stdio.h>
#include <math.h>

int main()
{		
	float ca, co, powhip, hip;
	
	scanf("%f%f", &ca, &co);
	
	powhip = pow(ca,2) + pow(co,2);

	hip = sqrt(powhip);
	
	printf("o valor da hipotenusa é: %0.2f\n", hip);

	return 0;
}
