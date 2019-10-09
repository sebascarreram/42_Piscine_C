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
	//printf("%i\n",argc); To know how many is  there position? || ./a.out "sebas" "carrera" ||--> there's 3
	if (argc > 1)
	{
		i = argc - 1;// argc minus 1 for array position "3-1 = 2 -> array[2]"
			//	First(0) array position is ./a.out, 
			//	second(1) array position is "sebas"
			//	third(2) array position is "carrera"
		while (i >= 1)
		{
			index = -1;
			while (argv[i][++index])
				ft_putchar(argv[i][index]);
			i--;
			ft_putchar('\n');
		}
	}
	return (0);
}
