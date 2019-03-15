/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_qsort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emamenko <emamenko@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 17:28:27 by emamenko          #+#    #+#             */
/*   Updated: 2019/03/14 16:37:21 by emamenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_qsort.h"

void		ft_qsort(void *a, size_t cnt, size_t sz,
	int f(const void *, const void *))
{
	int		med;
	int		lo;
	int		hi;
	int		fh;
	int		fl;

	if (cnt < 2)
		return ;
	else if (cnt == 2)
	{
		if (f(a, INCP(a, sz)) > 0)
			SWP(a, INCP(a, sz), sz);
		return ;
	}
	med = cnt >> 1;
	lo = 0;
	hi = cnt - 1;
	fl = 1;
	fh = 1;
	while (lo < med && hi > med)
	{
		lo += (fl = (f(INCPN(a, sz, lo), INCPN(a, sz, med)) < 0) && fl);
		hi -= (fh = (f(INCPN(a, sz, hi), INCPN(a, sz, med)) > 0) && fh);
		if (!fl && !fh)
		{
			SWP(INCPN(a, sz, lo++), INCPN(a, sz, hi--), sz);
			fl = 1;
			fh = 1;
		}
	}
	while (med > lo)
		if (f(INCPN(a, sz, med), INCPN(a, sz, med - 1)) < 0)
		{
			SWP(INCPN(a, sz, med - 1), INCPN(a, sz, med--), sz);
		}
		else
			SWP(INCPN(a, sz, med - 1), INCPN(a, sz, lo++), sz);
	while (med < hi)
		if (f(INCPN(a, sz, med), INCPN(a, sz, med + 1)) > 0)
		{
			SWP(INCPN(a, sz, med + 1), INCPN(a, sz, med++), sz);
		}
		else
			SWP(INCPN(a, sz, med + 1), INCPN(a, sz, hi--), sz);
	ft_qsort(a, med, sz, f);
	ft_qsort(INCPN(a, sz, med + 1), cnt - med - 1, sz, f);
}

int			cmp_int(const void *a, const void *b)
{
	int		aa;
	int		bb;

	aa = *((int *)a);
	bb = *((int *)b);
	return ((aa > bb) - (aa < bb));
}

#include <stdio.h>

int			main(void)
{
	int n = 10;
	int *a = malloc(sizeof(int) * n);
	int i;

	i = 0;
	while (i < n)
	{
		a[i] = rand();
		a++;
		i++;
	}

	ft_qsort(a, n, sizeof(int), cmp_int);
	i = 0;
	while (i < n)
	{
		printf("%d\n", a[i]);
		i++;
	}
	printf("\n");
}
