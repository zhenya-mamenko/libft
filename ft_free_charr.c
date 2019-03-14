/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_charr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emamenko <emamenko@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 17:06:11 by emamenko          #+#    #+#             */
/*   Updated: 2019/03/13 17:20:08 by emamenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free_charr(char **a, int count)
{
	int		i;

	i = 0;
	while ((i != 0 && i < count) || (i == 0 && a[i] != NULL))
	{
		ft_strdel(&(a[i]));
		i += 1;
	}
	ft_memdel((void **)a);
}
