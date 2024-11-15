/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkasamat <hkasamat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 13:44:21 by hkasamat          #+#    #+#             */
/*   Updated: 2024/11/09 19:28:59 by hkasamat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *s, int c, unsigned int n)
{
	char	*temp;

	temp = (char *)s;
	while (n > 0)
	{
		*temp = c;
		temp++;
		n--;
	}
	return (s);
}
