/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acash <acash@student.21-school.r>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 20:41:52 by acash             #+#    #+#             */
/*   Updated: 2021/10/13 20:41:55 by acash            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*mylist;

	if (!lst)
		return ;
	if (del)
	{
		while (*lst)
		{
			mylist = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = mylist;
		}
	}
	*lst = NULL;
}
