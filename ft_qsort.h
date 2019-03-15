/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_qsort.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emamenko <emamenko@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/14 15:45:11 by emamenko          #+#    #+#             */
/*   Updated: 2019/03/14 17:17:14 by emamenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_QSORT_H
# define FT_QSORT_H

# include <stdlib.h>

# define HILO(hilo, X, Y)	hilo.h=(X);hilo.l=(Y)
# define INCP(X, S)			(((char *)X) + (S))
# define INCPN(X, S, N)		(((char *)X) + (S) * (N))


typedef struct	s_hilo
{
	int		h;
	int		l;
}				t_hilo;

#endif
