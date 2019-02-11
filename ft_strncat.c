/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emamenko <emamenko@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 14:46:47 by emamenko          #+#    #+#             */
/*   Updated: 2019/02/11 14:47:06 by emamenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	int i;
	int c;

	i = 0;
	c = 0;
	while (nb > 0)
	{
		if (c > 0 || !dest[i])
		{
			dest[i] = src[c];
			c += 1;
			if (!src[c] || c == nb)
			{
				dest[i + 1] = '\0';
				return (dest);
			}
		}
		i += 1;
	}
	return (dest);
}
