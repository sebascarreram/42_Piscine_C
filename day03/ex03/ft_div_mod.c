#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
// Not down for submit and not #include
int main()
{
	int number1;
	int number2;
	int resultdiv;
	int resultmod;
	
	number1 = 10;
	number2 = 5;
	ft_div_mod(number1, number2, &resultdiv, &resultmod);
	printf("%i div %i = %i\n", number1, number2, resultdiv);
	printf("%i mod %i = %i\n", number1, number2, resultmod);
	return (0);
}
