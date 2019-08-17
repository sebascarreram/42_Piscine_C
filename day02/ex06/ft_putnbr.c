#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
		ft_putchar('\n');
		return ;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
		ft_putchar('\n');
	}
	else
		ft_putchar(nb + '0');
	//ft_putchar('\n');
}

int main()
{
	//printf("%s\n", ft_putnbr(42));
	ft_putnbr(42);
	return (0);
}
