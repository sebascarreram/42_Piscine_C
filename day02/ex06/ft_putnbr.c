#include <unistd.h>
//#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(nb * (-1));
		//ft_putchar('\n');
		//return ;
	}
	else
	{
		if (nb  >= 10)
			ft_putnbr(nb / 10);
		ft_putchar((nb % 10) + '0');
		//ft_putchar('\n');
	}
	//ft_putchar('\n');
}

int main()
{
	int a;

	a = -42;
	ft_putnbr(a);
	return (0);
}
