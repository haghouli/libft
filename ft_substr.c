/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 22:07:13 by haghouli          #+#    #+#             */
/*   Updated: 2022/10/24 09:20:25 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char	*alloc(char const *s, unsigned int start, size_t len)
{
	char	*sub;

	if (ft_strlen(s) < len)
		sub = (char *)malloc(((ft_strlen(s) - start) + 1) * sizeof(char));
	else
		sub = (char *)malloc((len + 1) * sizeof(char));
	return (sub);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	int				i;
	unsigned int	splen;

	i = 0;
	if (s == 0)
		return (0);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (ft_strlen(s) - start < len)
		splen = ft_strlen(s);
	else
		splen = start + len;
	sub = alloc(s, start, len);
	if (!sub)
		return (NULL);
	while (start < splen)
		sub[i++] = s[start++];
	sub[i] = '\0';
	return (sub);
}
