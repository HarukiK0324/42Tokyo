/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haruki <haruki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 16:10:23 by hkasamat          #+#    #+#             */
/*   Updated: 2024/11/21 10:19:00 by haruki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	count_char(const char *s, const char *c)
{
	int	count;
	int	found;
	int	index;
	int	i;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		found = 0;
		index = 0;
		while (c[index] != '\0')
		{
			if (s[i] == c[index])
			{
				found++;
				break ;
			}
			index++;
		}
		if (found == 0)
			count++;
		i++;
	}
	return (count);
}

static char	*ft_trim(char const *s1, char const *set, char *ptr)
{
	int	i;
	int	j;
	int	index;

	i = 0;
	j = 0;
	while (s1[j] != '\0')
	{
		index = 0;
		while (set[index] != '\0')
		{
			if (s1[j] == set[index])
				break ;
			index++;
		}
		if (set[index] == '\0')
		{
			ptr[i] = s1[j];
			i++;
		}
		j++;
	}
	ptr[i] = '\0';
	return (ptr);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;

	ptr = malloc(count_char(s1, set) + 1);
	if (ptr == (void *)0)
		return ((void *)0);
	return (ft_trim(s1, set, ptr));
}
