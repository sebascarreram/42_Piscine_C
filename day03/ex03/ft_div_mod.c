#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
// Not down for submit and not #include
int main()
{
	int a;
	int b;
	int c;
	int d;
	
	a = 20;
	b = 55;
	c = 0;
	d = 0;
	printf("Numbe1: %i\n", a);
	printf("Numbe2: %i\n", b);
	ft_div_mod(a, b, &c, &d);
	printf("Div resultd: %i\n", c);
	printf("Mod resultd: %i\n", d);
	return (0);
}
