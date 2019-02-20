/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emamenko <emamenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 14:57:32 by emamenko          #+#    #+#             */
/*   Updated: 2019/02/19 17:54:46 by emamenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t			ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	ls;
	size_t	ld;

	ld = ft_strlen(dst);
	ld = ld > dstsize ? dstsize : ld;
	ls = ft_strlen(src);
	if (ld == dstsize)
		return (dstsize + ls);
	if (ls < dstsize - ld)
		ft_memcpy(dst + ld, src, ls + 1);
	else
	{
		ft_memcpy(dst + ld, src, dstsize - 1);
		dst[ld + dstsize - 1] = '\0';
	}
	return (ld + ls);
}
