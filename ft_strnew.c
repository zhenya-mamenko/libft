/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emamenko <emamenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 16:07:23 by emamenko          #+#    #+#             */
/*   Updated: 2019/02/12 16:15:34 by emamenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*b;

	i = 0;
	b = malloc(sizeof(char) * (size + 1));
	if (b != NULL)
		while (i <= size)
			b[i++] = '\0';
	return (b);
}
