/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkasamat <hkasamat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 13:06:38 by hkasamat          #+#    #+#             */
/*   Updated: 2024/11/09 20:14:12 by hkasamat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, unsigned int n)
{
	char	*c;
	char	*s;

	c = (char *)dest;
	s = (char *)src;
	while (n > 0)
	{
		*c = *s;
		c++;
		src++;
		n--;
	}
	return (dest);
}
