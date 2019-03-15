/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   defines.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emamenko <emamenko@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/14 15:25:58 by emamenko          #+#    #+#             */
/*   Updated: 2019/03/14 16:08:17 by emamenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEFINES_H
# define DEFINES_H

# define SWP(X, Y, S) {char *_a=(char *)(X),*_b=(char *)(Y),_t; int _s=(S);SWPW}
# define SWPW while(_s-- > 0){_t=*_a;*_a=*_b;*_b=_t;_a++;_b++;}
# define SWPINT(X, Y)	SWP(X, Y, sizeof(int))
# define SWPLNG(X, Y)	SWP(X, Y, sizeof(long))
# define SWPLLNG(X, Y)	SWP(X, Y, sizeof(long long))
# define SWPDBL(X, Y)	SWP(X, Y, sizeof(double))
# define SWPLDBL(X, Y)	SWP(X, Y, sizeof(long double))
# define SWPCHR(X, Y)	SWP(X, Y, sizeof(char))
# define SWPSTR(X, Y)	SWP(X, Y, sizeof(char *))

# define MIN(X, Y) ((X) < (Y) ? (X) : (Y))
# define MAX(X, Y) ((X) > (Y) ? (X) : (Y))

#endif
