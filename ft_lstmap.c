/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emamenko <emamenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 08:18:43 by emamenko          #+#    #+#             */
/*   Updated: 2019/02/15 18:30:31 by emamenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*el;

	if (!lst)
		return (NULL);
	new = (*f)(lst);
	el = new;
	while (lst->next)
	{
		lst = lst->next;
		el->next = (*f)(lst);
		el = el->next;
	}
	return (new);
}
