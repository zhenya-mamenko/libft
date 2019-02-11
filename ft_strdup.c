/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emamenko <emamenko@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 14:36:14 by emamenko          #+#    #+#             */
/*   Updated: 2019/02/11 14:36:18 by emamenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*copy;
	int		i;
	int		l;

	l = 0;
	while (src[l])
		l += 1;
	copy = malloc(sizeof(char) * (l + 1));
	i = 0;
	while (i < l)
	{
		copy[i] = src[i];
		i += 1;
	}
	copy[l] = '\0';
	return (copy);
}
