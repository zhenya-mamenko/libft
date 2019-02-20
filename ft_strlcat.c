/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emamenko <emamenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 14:57:32 by emamenko          #+#    #+#             */
/*   Updated: 2019/02/19 16:46:50 by emamenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t			ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	c;
	size_t	ld;

	ld = ft_strlen(dst);
	i = ld;
	c = 0;
	while (i < (dstsize - 1))
	{
		dst[i] = src[c];
		if (!src[c])
			break ;
		c += 1;
		i += 1;
	}
	if (dstsize >= ld && dstsize != 0)
		dst[i] = '\0';
	return (ld + ft_strlen(src));
}
