#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int index;

	index = 0;
	// maybe it can put with != '\0' like while(str[index] != '\0')
	// but that is boolean: true or false. when str[index] work so TRUE until when it doesn't work so conviert FALSE. it means false == stop
	while (str[index])
	{
		ft_putchar(str[index]);
		index++;
	}
	ft_putchar('\n');
}
// Not down for submit and not #include
int	main()
{
	char *name;
	
	name = "Sebastian";
	ft_putstr(name);
	return (0);
}
