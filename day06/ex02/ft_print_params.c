#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int index;
	int i;

	if (argc == 2)
		ft_putchar('\n');
	else
	{
		i = 1;
		while (i < argc)
		{
			index = 0;
			while (argv[i][index])
			{	
				ft_putchar(argv[i][index]);
				//printf("%s\n", argv[index]);
				index++;
			}
			i++;
			ft_putchar('\n');
		}
		//ft_putchar('\n');
		
	}
	//ft_putchar('\n');
	return (0);
}
