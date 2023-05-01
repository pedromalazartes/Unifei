#include <stdio.h>

int main ()
{ 	
	int num1;
	float num2,result;
	
	scanf("%d", &num1);
	scanf("%f", &num2);

	result = num1 * num2;

	printf("%d * %0.2f = %0.2f\n", num1, num2, result);

	return 0;
}
