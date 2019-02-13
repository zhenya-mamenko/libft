/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emamenko <emamenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 08:59:22 by emamenko          #+#    #+#             */
/*   Updated: 2019/02/13 10:11:12 by emamenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char			*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*b;
	size_t			l;

	i = 0;
	l = ft_strlen(s);
	b = malloc(sizeof(char) * (l + 1));
	if (b != NULL)
	{
		while (s[i])
		{
			b[i] = (*f)(i, *(s + i));
		}
		b[l] = '\0';
	}
	return (b);
}
