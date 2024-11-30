/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkasamat <hkasamat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 15:56:44 by hkasamat          #+#    #+#             */
/*   Updated: 2024/11/30 17:17:56 by hkasamat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, unsigned int len)
{
	char	*ptr;
	int		i;

	i = 0;
	if (start >= ft_strlen(s))
	{
		ptr = malloc(1);
		*ptr = '\0';
		return (ptr);
	}
	else if (ft_strlen(s) - start < len)
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
