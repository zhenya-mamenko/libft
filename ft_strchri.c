/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchri.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emamenko <emamenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 16:50:36 by emamenko          #+#    #+#             */
/*   Updated: 2019/02/18 15:35:24 by emamenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strchri(const char *s, int c)
{
	char	l;
	int		i;

	i = 0;
	l = (char)c;
	while (s[i])
	{
		if (s[i] == l)
			return (i);
		i += 1;
	}
	if (l == '\0')
		return (i);
	else
		return (-1);
}
