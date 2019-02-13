/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emamenko <emamenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 09:44:22 by emamenko          #+#    #+#             */
/*   Updated: 2019/02/13 10:10:39 by emamenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*b;
	size_t	i;

	b = malloc(sizeof(char) * (len + 1));
	if (b != NULL)
	{
		i = 0;
		while (i < len)
		{
			b[i] = s[i + start];
			i += 1;
		}
		b[len] = '\0';
	}
	return (b);
}
