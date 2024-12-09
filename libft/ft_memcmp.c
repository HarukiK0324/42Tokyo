/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haruki <haruki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 14:14:07 by hkasamat          #+#    #+#             */
/*   Updated: 2024/12/09 17:11:03 by haruki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	*temp1;
	size_t	*temp2;

	temp1 = (size_t *)s1;
	temp2 = (size_t *)s2;
	while (n > 0 && (*temp1 == *temp2))
	{
		temp1++;
		temp2++;
		n--;
	}
	if (n == 0)
		return (0);
	return (*temp1 - *temp2);
}
