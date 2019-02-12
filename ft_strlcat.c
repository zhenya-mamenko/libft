/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emamenko <emamenko@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 14:57:32 by emamenko          #+#    #+#             */
/*   Updated: 2019/02/11 16:18:18 by emamenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

static size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

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
	if (dstsize != 0 && dstsize > ld)
		dst[i] = '\0';
	return (ld + ft_strlen(src));
}
