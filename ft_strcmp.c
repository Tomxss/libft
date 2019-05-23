#include "libft"

int ft_strcmp(char *str1, char *str2)
{
	while ((*str1 != '\0' && *str2 != '\0') && *str1 == *str2)
	{
		str1++;
		str2++;
	}

	if (*str1 == *str2)
	return (0);

	return (*str1 - *str2);
}
