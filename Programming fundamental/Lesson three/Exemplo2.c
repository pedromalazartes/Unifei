#include <stdio.h>

int main()
{
	int num1, result;

	scanf("%d", &num1);
	
	result = num1 * num1 * num1;

	printf("%d³ = %d \n", num1, result);

	return 0;
}
