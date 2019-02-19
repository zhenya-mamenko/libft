/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emamenko <emamenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 15:28:36 by emamenko          #+#    #+#             */
/*   Updated: 2019/02/16 12:21:54 by emamenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;

	if (s1 == NULL || s2 == NULL)
		return (s1 == s2 ? 1 : 0);
	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] != s2[i])
			return (0);
		i += 1;
	}
	if (i == n)
		return (1);
	if (s1[i] == '\0')
	{
		if (s2[i] == '\0')
			return (1);
		else
			return (0);
	}
	else if (i == n)
		return (0);
	return (1);
}
