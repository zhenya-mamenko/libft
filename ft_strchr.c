/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emamenko <emamenko@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 16:50:36 by emamenko          #+#    #+#             */
/*   Updated: 2019/02/11 16:58:40 by emamenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	char	l;
	int		i;

	i = 0;
	l = (char)c;
	while (s[i])
	{
		if (s[i] == l)
			return (s + i);
		i += 1;
	}
	if (l == '\0')
		return (s + i);
	else
		return (NULL);
}
