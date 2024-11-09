/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkasamat <hkasamat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 15:56:44 by hkasamat          #+#    #+#             */
/*   Updated: 2024/11/09 16:07:57 by hkasamat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, unsigned int len)
{
	char	*ptr;
	int		i;

	i = 0;
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
