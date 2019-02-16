/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emamenko <emamenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 15:33:42 by emamenko          #+#    #+#             */
/*   Updated: 2019/02/15 21:14:51 by emamenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	check(char c, int f)
{
	int	result;
	int	r;

	result = c >= '0' && c <= '9' ? 0 : 3;
	result = (c == '+' || c == '-') ? 1 : result;
	result = (c == ' ' || c == '\n' || c == '\t' || c == '\r' ||
		c == '\v' || c == '\f') ? 2 : result;
	r = f < result ? -1 : result;
	return (r);
}

int			ft_atoi(const char *str)
{
	int	result;
	int	i;
	int	f;
	int	r;
	int	n;

	result = 0;
	i = -1;
	f = 2;
	n = 1;
	while (str[++i])
	{
		r = check(str[i], f);
		if (r == -1)
			break ;
		else if (r == 1)
			n = str[i] == '-' ? -1 : 1;
		else if (r == 0)
			result = result * 10 + (str[i] - '0') * n;
		f = (r == 1 || r == 0) ? 0 : f;
	}
	return (result);
}
