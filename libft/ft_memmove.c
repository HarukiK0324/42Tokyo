/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkasamat <hkasamat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 13:11:16 by hkasamat          #+#    #+#             */
/*   Updated: 2024/11/30 17:42:55 by hkasamat         ###   ########.fr       */
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
	if (dest == (void *)0 && src == (void *)0)
		return ((void *)0);
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
