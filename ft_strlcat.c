/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:00:48 by haghouli          #+#    #+#             */
/*   Updated: 2022/10/18 20:47:37 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	j;
	size_t	i;
	size_t	dstlen;
	size_t	srclen;

	srclen = ft_strlen(src);
	if (dstsize == 0 && dst == 0)
		return (srclen);
	dstlen = ft_strlen(dst);
	j = 0;
	i = 0;
	while (dst[i])
		i++;
	if ((0 < dstsize) && (dstsize > ft_strlen(dst)))
	{
		while (src[j] && (i < dstsize - 1))
			dst[i++] = src[j++];
		dst[i] = '\0';
	}
	if (dstsize <= dstlen)
		return (dstsize + srclen);
	return (dstlen + srclen);
}
