/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emamenko <emamenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 15:28:36 by emamenko          #+#    #+#             */
/*   Updated: 2019/02/20 23:25:55 by emamenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*b1;
	unsigned char	*b2;

	b1 = (unsigned char *)s1;
	b2 = (unsigned char *)s2;
	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if (b1[i] != b2[i])
			return (b1[i] - b2[i]);
		i += 1;
	}
	if (i == n)
		return (0);
	if (s1[i] == '\0' || s2[i] == '\0')
	{
		return (b1[i] - b2[i]);
	}
	return (0);
}
