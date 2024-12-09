/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haruki <haruki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 13:21:01 by hkasamat          #+#    #+#             */
/*   Updated: 2024/12/09 17:02:01 by haruki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	size_of(char *c)
{
	size_t	n;

	n = 0;
	while (*c != '\0')
	{
		c++;
		n++;
	}
	return (n);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	size_dest;
	size_t	size_src;
	size_t	i;

	size_dest = size_of(dest);
	size_src = size_of((char *)src);
	if (size <= size_dest)
		return (size + size_src);
	i = size_dest;
	dest += size_dest;
	while (*src != '\0' && i < size - 1)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	return (size_dest + size_src);
}
