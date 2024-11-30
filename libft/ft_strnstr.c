/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkasamat <hkasamat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 14:25:45 by hkasamat          #+#    #+#             */
/*   Updated: 2024/11/30 17:47:06 by hkasamat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, unsigned int len)
{
	char	*temp;

	temp = (char *)big;
	if (big == (void *)0 && len == 0)
		return ((void *)0);
	else if (*little == '\0')
		return (temp);
	while (*temp != '\0' && len >= ft_strlen(little))
	{
		if (ft_strncmp((const char *)temp, little, ft_strlen(little)) == 0)
			return (temp);
		temp++;
		len--;
	}
	return ((void *)0);
}
