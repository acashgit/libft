/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acash <acash@student.21-school.r>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 17:24:56 by acash             #+#    #+#             */
/*   Updated: 2021/10/11 17:25:01 by acash            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;

	if (!s || len <= 0)
		return (ft_calloc(1, sizeof(char)));
	if (start >= ft_strlen(s))
		return (ft_calloc(1, sizeof(char)));
	if (ft_strlen(s) < len)
		sub = ft_calloc((ft_strlen(s)), sizeof(char));
	else
		sub = ft_calloc((len + 1), sizeof(char));
	if (sub == NULL)
		return ((void *)0);
	ft_strlcpy(sub, s + start, len + 1);
	return (sub);
}
