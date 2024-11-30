/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkasamat <hkasamat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 16:10:23 by hkasamat          #+#    #+#             */
/*   Updated: 2024/11/30 18:43:29 by hkasamat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	included(char c, char const *set)
{
	while (*set != '\0')
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

static char	*trim(unsigned int first, unsigned int last, char const *s1)
{
	char			*ptr;
	unsigned int	i;

	i = 0;
	if (first > last)
		return (ft_strdup(""));
	ptr = malloc(last - first + 2);
	if (ptr == (void *)0)
		return ((void *)0);
	while (first <= last)
	{
		ptr[i] = s1[first];
		i++;
		first++;
	}
	ptr[i] = '\0';
	return (ptr);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	first;
	unsigned int	last;

	first = 0;
	last = ft_strlen(s1) - 1;
	if (s1[0] == 0)
		return (ft_strdup(""));
	while (included(s1[first], set) == 1 && first <= last)
		first++;
	while (included(s1[last], set) == 1 && first <= last)
		last--;
	return (trim(first, last, s1));
}
