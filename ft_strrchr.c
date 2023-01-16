/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 08:11:59 by haghouli          #+#    #+#             */
/*   Updated: 2022/10/17 10:48:25 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;

	str = NULL;
	if ((char )c == 0)
		return ((char *)s + ft_strlen(s));
	while (*s)
	{
		if ((char)*s == (char)c)
			str = (char *)s;
		s++;
	}
	s = str;
	return ((char *)s);
}
