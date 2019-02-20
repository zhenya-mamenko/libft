/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emamenko <emamenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 14:57:32 by emamenko          #+#    #+#             */
/*   Updated: 2019/02/20 09:27:23 by emamenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t			ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	ls;
	size_t	ld;
	size_t	n;

	ls = ft_strlen(src);
	ld = ft_strlen(dst);
	ld = ld > dstsize ? dstsize : ld;
	n = dstsize - ld;
	if (n == 0)
		return (ld + ls);
	dst += ld;
	while (*src)
	{
		if (n != 1)
		{
			*dst++ = *src;
			n--;
		}
		src++;
	}
	*dst = '\0';
	return (ld + ls);
}
