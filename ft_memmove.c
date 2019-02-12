/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emamenko <emamenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 14:07:55 by emamenko          #+#    #+#             */
/*   Updated: 2019/02/12 14:20:49 by emamenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*buf;

	buf = malloc(sizeof(char) * len);
	i = 0;
	while (i < len)
	{
		buf[i] = ((char *)src)[i];
		i += 1;
	}
	i = 0;
	while (i < len)
	{
		((char *)dst)[i] = buf[i];
		i += 1;
	}
	free(buf);
	return (dst);
}
