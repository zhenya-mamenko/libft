/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emamenko <emamenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 08:59:22 by emamenko          #+#    #+#             */
/*   Updated: 2019/02/13 09:53:32 by emamenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char			*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*b;
	size_t	l;

	i = 0;
	l = ft_strlen(s);
	b = malloc(l + 1);
	if (b != NULL)
	{
		while (s[i])
		{
			b[i] = (*f)(s + i);
			i += 1;
		}
		b[l] = '\0';
	}
	return (b);
}
