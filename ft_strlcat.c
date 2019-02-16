/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emamenko <emamenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 14:57:32 by emamenko          #+#    #+#             */
/*   Updated: 2019/02/15 19:39:53 by emamenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t			ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	c;
	size_t	ld;

	i = 0;
	c = 0;
	ld = ft_strlen(dst);
	while (i < dstsize - 1)
	{
		if (c > 0 || !dst[i])
		{
			dst[i] = src[c];
			if (!src[c])
				break ;
			c += 1;
		}
		i += 1;
	}
	if (dstsize != 0 && dstsize >= ld)
	{
		dst[i] = '\0';
		return (ld + ft_strlen(src));
	}
	else
		return (dstsize + ft_strlen(src));
}
