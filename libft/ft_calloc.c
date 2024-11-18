/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haruki <haruki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 15:14:05 by hkasamat          #+#    #+#             */
/*   Updated: 2024/11/18 01:35:16 by haruki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(unsigned int nmemb, unsigned int size)
{
	void	*ptr;
	unsigned int i;

	i = 0;
	if (nmemb == 0 || size == 0 || (4294967295 / size) < nmemb)
		return ((void *)0);
	ptr = malloc(nmemb * size);
	if (ptr == (void *)0)
		return ((void *)0);
	while(i < size * nmemb)
	{
		((unsigned char *)ptr)[i] = 0;
		i++;
	}
	return (ptr);
}
