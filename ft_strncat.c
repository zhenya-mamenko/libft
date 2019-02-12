/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emamenko <emamenko@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 14:46:47 by emamenko          #+#    #+#             */
/*   Updated: 2019/02/11 16:38:06 by emamenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int i;
	int c;

	i = 0;
	c = 0;
	while (n > 0)
	{
		if (c > 0 || !s1[i])
		{
			s1[i] = s2[c];
			c += 1;
			if (!s2[c] || c == n)
			{
				s1[i + 1] = '\0';
				return (s1);
			}
		}
		i += 1;
	}
	return (s1);
}
