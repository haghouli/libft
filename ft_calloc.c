/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:32:21 by haghouli          #+#    #+#             */
/*   Updated: 2022/10/25 08:05:09 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <limits.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t	full_size;
	void	*str;

	full_size = count * size;
	if (full_size > SIZE_MAX)
		return (NULL);
	str = malloc(full_size);
	if (!str)
		return (NULL);
	ft_bzero(str, full_size);
	return (str);
}
