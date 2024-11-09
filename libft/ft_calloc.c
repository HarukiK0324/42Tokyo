/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkasamat <hkasamat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 15:14:05 by hkasamat          #+#    #+#             */
/*   Updated: 2024/11/09 19:02:01 by hkasamat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(unsigned int nmemb, unsigned int size)
{
	void	*ptr;

	if (nmemb == 0 || size == 0 || (4294967295 / size) < nmemb)
		return ((void *)0);
	ptr = malloc(nmemb * size);
	if (ptr == (void *)0)
		return ((void *)0);
	return (ptr);
}
