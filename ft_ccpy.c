#include "libft.h"

int	ft_ccpy(char **dst, char *src, char c)
{
	int	i;
	int	count;
	int	pos;

	i = -1;
	count = 0;
	while (src[++i])
		if (src[i] == c)
			break;
	pos = i;
	if (!(*dst = ft_strnew(i)))
		return (0);
	while (src[count] && count < i)
	{
		if (!(*dst = ft_strjoinchr(*dst, src[count])))
			return (0);
		count++;
	}
	return (pos);
}
