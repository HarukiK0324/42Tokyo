/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haruki <haruki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 13:16:01 by hkasamat          #+#    #+#             */
/*   Updated: 2024/12/09 16:59:56 by haruki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	size_of(const char *src)
{
	size_t	i;

	i = 0;
	while (*src != '\0')
	{
		i++;
		src++;
	}
	return (i);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	const char		*ptr;

	i = 0;
	ptr = src;
	if (size == 0)
		return (size_of(ptr));
	while (*ptr != '\0' && i < size - 1)
	{
		*dest = *ptr;
		dest++;
		ptr++;
		i++;
	}
	*dest = '\0';
	return (size_of(src));
}
