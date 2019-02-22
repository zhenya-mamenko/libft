/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emamenko <emamenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 13:33:11 by emamenko          #+#    #+#             */
/*   Updated: 2019/02/20 18:15:15 by emamenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	v;
	unsigned long	l;
	unsigned long	*m;
	size_t			i;

	v = (unsigned char)c;
	m = (unsigned long *)b;
	l = v;
	l += l << 8;
	l += l << 16;
	l += l << 32;
	while (len > 7)
	{
		*m = l;
		m++;
		len -= 8;
	}
	i = 0;
	while (i < len)
	{
		((unsigned char *)m)[i] = v;
		i += 1;
	}
	return (b);
}
