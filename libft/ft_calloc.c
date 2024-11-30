/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkasamat <hkasamat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 15:14:05 by hkasamat          #+#    #+#             */
/*   Updated: 2024/11/30 16:29:50 by hkasamat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(unsigned int nmemb, unsigned int size)
{
	void			*ptr;
	unsigned int	i;

	i = 0;
	if (size == 0 || nmemb == 0)
		return (malloc(1));
	else if ((4294967295 / size) < nmemb)
		return ((void *)0);
	ptr = malloc(nmemb * size);
	if (ptr == (void *)0)
		return ((void *)0);
	while (i < size * nmemb)
	{
		((unsigned char *)ptr)[i] = 0;
		i++;
	}
	return (ptr);
}
