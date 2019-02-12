/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emamenko <emamenko@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 16:51:28 by emamenko          #+#    #+#             */
/*   Updated: 2019/02/11 17:02:09 by emamenko         ###   ########.fr       */
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

	i = ft_strlen(s) + 1;
	l = (char)c;
	while (i >= 0)
	{
		if (s[i] == l)
			return (s + i);
		i -= 1;
	}
	return (NULL);
}
