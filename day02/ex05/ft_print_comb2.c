#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int i, d;
	
	i = 0;
	while (i <= 98)
	{
		d = i + 1;
		while (d <= 99)
		{
			ft_putchar((i / 10) + 48);
			ft_putchar((i % 10) + 48);
			ft_putchar(' ');
			ft_putchar((d / 10) + 48);
			ft_putchar((d % 10) + 48);			
			if (!(i == 98 && d == 99))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			d++;
		}
		i++;
	}
	ft_putchar('\n');
}

int	main()
{
	ft_print_comb2();
	return (0);
}
