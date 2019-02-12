/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emamenko <emamenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 16:44:46 by emamenko          #+#    #+#             */
/*   Updated: 2019/02/12 14:37:25 by emamenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	int		c;
	int		l;

	l = 0;
	while (needle[l])
		l += 1;
	if (l == 0)
		return ((char *)haystack);
	i = 0;
	c = 0;
	while (i < len && haystack[i])
	{
		if (c < l && haystack[i] == needle[c])
		{
			c += 1;
			if (c == l)
				return ((char *)(haystack + i - c + 1));
		}
		else
			c = 0;
		i += 1;
	}
	return (NULL);
}
