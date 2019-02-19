/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emamenko <emamenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 14:36:14 by emamenko          #+#    #+#             */
/*   Updated: 2019/02/13 09:12:09 by emamenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*copy;
	int		i;
	int		l;

	l = 0;
	while (s1[l])
		l += 1;
	copy = malloc(sizeof(char) * (l + 1));
	if (copy != NULL)
	{
		i = 0;
		while (i < l)
		{
			copy[i] = s1[i];
			i += 1;
		}
		copy[l] = '\0';
	}
	return (copy);
}
