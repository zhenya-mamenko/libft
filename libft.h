/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emamenko <emamenko@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 14:20:44 by emamenko          #+#    #+#             */
/*   Updated: 2019/02/11 16:42:07 by emamenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* memset
bzero
memcpy
memccpy
memmove
memchr
memcmp */
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s1);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strncpy(char *dst, const char *src, size_t len);
char	*ft_strcat(char *s1, const char *s2);
char	*ft_strncat(char *s1, const char *s2, size_t n);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
/* strchr
strrchr */
char	*ft_strstr(const char *haystack, const char *needle);
/* strnstr */
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n)
int		ft_atoi(char *str);
/* isalpha
isdigit
isalnum
isascii
isprint
toupper
tolower */
