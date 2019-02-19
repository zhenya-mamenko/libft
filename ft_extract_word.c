/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_extract_word.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emamenko <emamenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 18:15:35 by emamenko          #+#    #+#             */
/*   Updated: 2019/02/14 19:08:35 by emamenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_extract_word(char const *s, char d, unsigned int n)
{
	unsigned int	c;
	unsigned int	f;
	unsigned int	i;
	char			*b;

	c = 0;
	f = 0;
	i = 0;
	b = ft_strnew(100000);
	while (*s)
	{
		if (*s != d)
		{
			c += (f == 0) ? 1 : 0;
			if ((f = 1) && c == n)
				b[i++] = *s;
		}
		else if ((f = 0) && c == n)
			break ;
		s++;
	}
	return (ft_strshrink(&b));
}
