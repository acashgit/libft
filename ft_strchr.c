/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acash <acash@student.21-school.r>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 16:09:37 by acash             #+#    #+#             */
/*   Updated: 2021/10/06 16:09:40 by acash            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*b;

	i = 0;
	b = (char *)s;
	while (i < (ft_strlen(s) + 1))
	{
		if (b[i] == (char)c)
		{
			return (&b[i]);
		}
		i++;
	}
	return ((void *)0);
}
