/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juestrel <juestrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 11:43:51 by juestrel          #+#    #+#             */
/*   Updated: 2023/11/29 13:00:31 by juestrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_return_result(int i, int needle_length, const char *haystack)
{
	if (i != needle_length)
	{
		return (0);
	}
	return ((char *)haystack - i);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	needle_length;
	size_t	counter;

	i = 0;
	needle_length = ft_strlen(needle);
	counter = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (*haystack != '\0' && i < needle_length && counter < len)
	{
		if (*haystack == needle[i])
		{
			i++;
			haystack++;
		}
		else if (*haystack != needle[i])
		{
			i = 0;
			haystack++;
		}
		counter++;
	}
	return (ft_return_result(i, needle_length, haystack));
}
