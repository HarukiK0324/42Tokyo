/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkasamat <hkasamat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 13:11:16 by hkasamat          #+#    #+#             */
/*   Updated: 2024/11/09 20:25:29 by hkasamat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, unsigned int n)
{
	unsigned int	i;
	char			*d;
	char			*s;

	i = 0;
	d = (char *)dest;
	s = (char *)src;
	if (dest < src)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
		return ((void *)d);
	}
	i = n;
	while (i > 0)
	{
		i--;
		d[i] = s[i];
	}
	return ((void *)d);
}
