/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emamenko <emamenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 16:51:28 by emamenko          #+#    #+#             */
/*   Updated: 2019/02/12 14:38:07 by emamenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

static size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char			*ft_strrchr(const char *s, int c)
{
	char	l;
	int		i;

	i = ft_strlen((char *)s) + 1;
	l = (char)c;
	while (i >= 0)
	{
		if (s[i] == l)
			return ((char *)(s + i));
		i -= 1;
	}
	return (NULL);
}
