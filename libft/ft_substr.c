/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haruki <haruki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 15:56:44 by hkasamat          #+#    #+#             */
/*   Updated: 2024/11/18 01:52:51 by haruki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static unsigned int	ft_strlen(const char *s)
{
	int	len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

char	*ft_substr(char const *s, unsigned int start, unsigned int len)
{
	char	*ptr;
	int		i;

	i = 0;
	if(start >= ft_strlen(s))
	{
		ptr = malloc(1);
		*ptr = '\0';
		return ptr;
	}
	else if(ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	ptr = malloc(len + 1);
	if (ptr == (void *)0)
		return ((void *)0);
	while (len > 0 && s[start + i] != '\0')
	{
		ptr[i] = s[start + i];
		i++;
		len--;
	}
	ptr[i] = '\0';
	return (ptr);
}
