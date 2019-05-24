/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 18:17:22 by tcoetzee          #+#    #+#             */
/*   Updated: 2019/05/24 18:54:07 by tcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;
	int		found;

	i = -1;
	found = 1;
	if (!ft_strlen(little))
		return ((char *)big);
	while (*(big + ++i) && i < len)
	{
		j = 0;
		if (*(big + i) == *(little + 0))
		{
			k = 1;
			found = 1;
			while (*(big + k) && *(little + j) && j < len && k < len)
				if (*(big + k++) != *(little + j++))
					found = 0;
			if (found && !*(little + j))
				return ((char *)big + 1);
		}
	}
	return (NULL);
}
