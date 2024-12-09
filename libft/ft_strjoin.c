/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haruki <haruki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 16:05:08 by hkasamat          #+#    #+#             */
/*   Updated: 2024/12/09 17:03:14 by haruki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	size_of(char const *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t		i;

	i = 0;
	ptr = malloc(size_of(s1) + size_of(s2) + 1);
	if (ptr == (void *)0)
		return ((void *)0);
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	while (s2[i - size_of(s1)] != '\0')
	{
		ptr[i] = s2[i - size_of(s1)];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
