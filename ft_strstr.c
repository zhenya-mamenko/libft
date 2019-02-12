/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emamenko <emamenko@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 15:22:49 by emamenko          #+#    #+#             */
/*   Updated: 2019/02/11 16:40:51 by emamenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int c;
	int l;

	l = 0;
	while (needle[l])
		l += 1;
	if (l == 0)
		return (haystack);
	i = 0;
	c = 0;
	while (haystack[i])
	{
		if (c < l && haystack[i] == needle[c])
		{
			c += 1;
			if (c == l)
				return (haystack + i - c + 1);
		}
		else
			c = 0;
		i += 1;
	}
	return (NULL);
}
