/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haruki <haruki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 13:51:31 by hkasamat          #+#    #+#             */
/*   Updated: 2024/11/15 14:43:09 by haruki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static unsigned int	size_of(char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strrchr(const char *s, int c)
{
	char			*temp;
	unsigned int	size;

	temp = (char *)s;
	size = size_of(temp);
	temp += size;
	if(c == '\0')
		return temp;
	temp--;
	while (size > 0)
	{
		if (*temp == (char)c)
			return (temp);
		temp--;
		size--;
	}
	return (void *)0;
}
