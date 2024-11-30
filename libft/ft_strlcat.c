/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkasamat <hkasamat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 13:21:01 by hkasamat          #+#    #+#             */
/*   Updated: 2024/11/30 18:37:38 by hkasamat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static unsigned int	size_of(char *c)
{
	unsigned int	n;

	n = 0;
	while (*c != '\0')
	{
		c++;
		n++;
	}
	return (n);
}

unsigned int	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	unsigned int	size_dest;
	unsigned int	size_src;
	unsigned int	i;

	size_dest = size_of(dest);
	size_src = size_of((char *)src);
	if (size <= size_dest)
		return (size + size_src);
	i = size_dest;
	dest += size_dest;
	while (*src != '\0' && i < size - 1)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	return (size_dest + size_src);
}
