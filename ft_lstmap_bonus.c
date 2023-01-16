/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 14:25:03 by haghouli          #+#    #+#             */
/*   Updated: 2022/10/25 08:04:28 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*t;
	t_list	*tmp;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	t = ft_lstnew(f(lst -> content));
	if (!t)
		return (NULL);
	tmp = t;
	lst = lst -> next;
	while (lst)
	{
		t -> next = ft_lstnew(f(lst -> content));
		if (!t -> next)
		{
			ft_lstclear(&tmp, del);
			return (0);
		}
		t = t -> next;
		lst = lst -> next;
	}
	t -> next = NULL;
	return (tmp);
}
