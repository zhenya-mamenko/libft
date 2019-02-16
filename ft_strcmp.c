/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emamenko <emamenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 15:26:23 by emamenko          #+#    #+#             */
/*   Updated: 2019/02/15 20:49:07 by emamenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(const char *s1, const char *s2)
{
	int				i;
	unsigned char	*b1;
	unsigned char	*b2;

	b1 = (unsigned char *)s1;
	b2 = (unsigned char *)s2;
	i = 0;
	while (s1[i] && s2[i])
	{
		if (b1[i] != b2[i])
			return (b1[i] - b2[i]);
		i += 1;
	}
	if (b1[i] == '\0')
	{
		if (b2[i] == '\0')
			return (0);
		else
			return (-b2[i]);
	}
	else
		return (b1[i]);
}
