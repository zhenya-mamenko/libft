/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_intarr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emamenko <emamenko@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 17:06:11 by emamenko          #+#    #+#             */
/*   Updated: 2019/03/13 17:19:50 by emamenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free_intarr(int **a, int count)
{
	int		i;

	i = 0;
	while (i < count)
	{
		ft_memdel((void **)&(a[i]));
		i += 1;
	}
	ft_memdel((void **)a);
}
