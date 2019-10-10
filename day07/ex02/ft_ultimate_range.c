#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int size;
	int i;
	
	size = max - min;
	if (min >= max)
		return (0);
	*range = (int*)malloc(sizeof(int) * size);
	i = 0;
	while (min < range[i][0])
	{
		range[0][i] = min;
		i++;
		min++;
	}
	return (size);
}

int	main()
{
	int one = 2;
	int two = 6;
	int number = 3;
	int *pt1 = &number;
	int **pt2 = &pt1;
	
	
	printf("%i\n", ft_ultimate_range(pt2, one, two));
	return (0);
}
