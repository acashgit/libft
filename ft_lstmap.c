/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acash <acash@student.21-school.r>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 21:02:48 by acash             #+#    #+#             */
/*   Updated: 2021/10/13 21:02:49 by acash            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	**mylist;
	t_list	*save;
	t_list	*newlist;

	if (!lst || !f)
		return (NULL);
	save = NULL;
	mylist = &save;
	while (lst)
	{
		newlist = ft_lstnew(f(lst->content));
		if (!newlist)
		{
			ft_lstclear(mylist, del);
			return (NULL);
		}
		ft_lstadd_back(mylist, newlist);
		lst = lst->next;
	}
	return (*mylist);
}
