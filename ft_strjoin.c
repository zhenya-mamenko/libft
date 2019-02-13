/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emamenko <emamenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 08:59:22 by emamenko          #+#    #+#             */
/*   Updated: 2019/02/13 09:57:28 by emamenko         ###   ########.fr       */
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

char			*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		c;
	char	*b;

	b = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (b != NULL)
	{
		i = 0;
		while (s1[i])
		{
			b[i] = s1[i];
			i += 1;
		}
		c = i;
		i = 0;
		while (s2[i])
			b[c++] = s2[i++];
		b[c] = '\0';
	}
	return (b);
}
