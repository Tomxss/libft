/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 10:31:16 by tcoetzee          #+#    #+#             */
/*   Updated: 2019/05/26 12:55:05 by tcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *str1, const char *str2)
{
	size_t	len_s1;
	size_t	len_s2;

	len_s1 = ft_strlen(str1) + 1;
	len_s2 = ft_strlen(str2) + 1;
	if (len_s1 < len_s2)
		return (ft_strncmp(str1, str2, len_s1));
	else
		return (ft_strncmp(str1, str2, len_s2));
}
