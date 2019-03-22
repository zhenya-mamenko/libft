/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstri.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emamenko <emamenko@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 15:22:49 by emamenko          #+#    #+#             */
/*   Updated: 2019/03/22 00:10:11 by emamenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strstri(const char *haystack, const char *needle)
{
	char	*s;

	s = ft_strstr(haystack, needle);
	if (s)
		return (s - haystack);
	else
		return (-1);
}
