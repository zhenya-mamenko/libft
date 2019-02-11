/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emamenko <emamenko@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 14:57:32 by emamenko          #+#    #+#             */
/*   Updated: 2019/02/11 15:03:58 by emamenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	c;
	unsigned int	ld;
	unsigned int	ls;

	i = 0;
	c = 0;
	ld = ft_strlen(dest);
	ls = ft_strlen(src);
	while (size != 0 && i < size - 1)
	{
		if (c > 0 || !dest[i])
		{
			dest[i] = src[c];
			if (!src[c])
				break ;
			c += 1;
		}
		i += 1;
	}
	if (size != 0 && size >= ld)
		dest[i] = '\0';
	return (size < ld ? size + ls : ld + ls);
}
