/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emamenko <emamenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 13:33:11 by emamenko          #+#    #+#             */
/*   Updated: 2019/02/12 13:39:39 by emamenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	v;
	size_t			i;

	v = (unsigned char)c;
	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = v;
		i += 1;
	}
	return (b);
}
