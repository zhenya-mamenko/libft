/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emamenko <emamenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 15:56:22 by emamenko          #+#    #+#             */
/*   Updated: 2019/02/12 16:10:53 by emamenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	size_t	i;
	char	*b;

	i = 0;
	b = malloc(sizeof(char) * size);
	if (b != NULL)
		while (i < size)
			b[i++] = 0;
	return ((void *)b);
}
