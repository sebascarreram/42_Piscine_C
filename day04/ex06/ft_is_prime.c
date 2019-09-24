#include <stdio.h>
#include <stdbool.h>

int	ft_is_prime(int nb)
{
	int index;
	int isprime = true;
	
	index = nb - 1;
	while (index > 1)
	{
		//printf("%d ", index);
		if (nb % index == 0)
			isprime = false;
		/*else
			return (1);*/
		index--;
	}
	if (isprime)
		return (1);
	else
		return (0);
	return (0);
}

int	main()
{
	int number1[] = {104395303, 39, 29, 65, 8,7 ,'\0'};
	int index;

	index = 0;
	//number1 = 104395303;
	//number1 = 39;
	//number1 = 29;
	//number1 = 65;
	//number1 = 8;
	while (number1[index] != '\0')
	{
		if (ft_is_prime(number1[index]) == 0)
			printf("%i is NOT prime = %i\n", number1[index], ft_is_prime(number1[index]));
		else
			printf("%i is prime = %i\n", number1[index], ft_is_prime(number1[index]));
		index++;
	}
	return (0);
}
