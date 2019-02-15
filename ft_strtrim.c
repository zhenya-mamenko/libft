/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emamenko <emamenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 09:59:13 by emamenko          #+#    #+#             */
/*   Updated: 2019/02/14 16:10:05 by emamenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	start;
	size_t	len;

	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	start = i;
	i = ft_strlen(s) - 1;
	if (start != i)
		while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
			i--;
	len = i - start + 1;
	return (start != i ? ft_strsub(s, start, len) : ft_strnew(0));
}
