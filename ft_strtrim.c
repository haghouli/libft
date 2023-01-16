/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 09:54:16 by haghouli          #+#    #+#             */
/*   Updated: 2022/10/24 08:36:10 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	prefix;
	size_t	suffix;

	prefix = 0;
	while (s1[prefix] && ft_strchr(set, s1[prefix]) != 0)
		prefix++;
	suffix = ft_strlen(s1);
	while (suffix > prefix && ft_strchr(set, s1[suffix - 1]) != 0)
		suffix--;
	str = (char *)malloc(sizeof(*s1) * (suffix - prefix + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (prefix < suffix)
		str[i++] = s1[prefix++];
	str[i] = 0;
	return (str);
}
