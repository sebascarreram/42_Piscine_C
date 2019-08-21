#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int div;
	int mod;
	
	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
// Not down for submit and not #include
int	main()
{
	int a;
	int b;
	int c;
	int d;
	
	a = 10;
	b = 5;
	c = 0;
	d = 0;
	printf("Number1: %i\n", a);
	printf("Number2: %i\n", b);
	ft_ultimate_div_mod(&a, &b);
	printf("Resultd a: %d\n", a);
	printf("Resultd b: %d\n", b);
	
}
