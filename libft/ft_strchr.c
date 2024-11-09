/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkasamat <hkasamat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 13:46:45 by hkasamat          #+#    #+#             */
/*   Updated: 2024/11/09 20:35:01 by hkasamat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	*temp;

	temp = (char *)s;
	while (*temp != '\0')
	{
		if (*temp == c)
			return (temp);
		temp++;
	}
	if (c == '\0')
		return (temp);
	return ((void *)'\0');
}
