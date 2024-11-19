#include <stdio.h>


void	ft_function(void)
{
	static int i = 2;
	i++;
	printf("i is %d\n", i);
}

int	main(void)
{
	int	i;

	i = 0;
	while (i++ < 5)
		ft_function();
}