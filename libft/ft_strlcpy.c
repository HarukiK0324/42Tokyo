/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkasamat <hkasamat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 13:16:01 by hkasamat          #+#    #+#             */
/*   Updated: 2024/11/09 19:52:09 by hkasamat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static unsigned int	size_of(const char *src)
{
	unsigned int	i;

	i = 0;
	while (*src != '\0')
	{
		i++;
		src++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	unsigned int	i;
	const char		*ptr;

	i = 0;
	ptr = src;
	if (size == 0)
		return (size_of(ptr));
	while (*ptr != '\0' && i < size - 1)
	{
		*dest = *ptr;
		dest++;
		ptr++;
		i++;
	}
	*dest = '\0';
	return (size_of(src));
}
