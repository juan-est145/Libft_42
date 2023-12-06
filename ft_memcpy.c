/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juestrel <juestrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 16:35:11 by juestrel          #+#    #+#             */
/*   Updated: 2023/11/27 17:38:42 by juestrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t		i;
	char		*destiny;
	const char	*source;

	i = 0;
	destiny = dst;
	source = src;
	while (i < n && (src != NULL || dst != NULL))
	{
		destiny[i] = source[i];
		i++;
	}
	return (dst);
}
