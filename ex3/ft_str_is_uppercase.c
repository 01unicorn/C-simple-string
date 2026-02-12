#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	printf("%d\n", ft_str_is_uppercase("ASCVD"));
	printf("%d\n", ft_str_is_uppercase("acbdc"));
	printf("%d\n", ft_str_is_uppercase("1234"));
	printf("%d\n", ft_str_is_uppercase(""));
}*/	
