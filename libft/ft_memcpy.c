/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haruki <haruki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 13:06:38 by hkasamat          #+#    #+#             */
/*   Updated: 2024/12/09 17:09:20 by haruki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*c;
	char	*s;

	c = (char *)dest;
	s = (char *)src;
	while (n > 0)
	{
		*c = *s;
		c++;
		s++;
		n--;
	}
	return (dest);
}
