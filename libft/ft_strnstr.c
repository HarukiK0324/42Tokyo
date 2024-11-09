/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkasamat <hkasamat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 14:25:45 by hkasamat          #+#    #+#             */
/*   Updated: 2024/11/09 19:56:26 by hkasamat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static unsigned int	size_of(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	while (*s1 != '\0' && (*s1 == *s2) && n > 0)
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return ((int)*s1 - (int)*s2);
}

char	*ft_strnstr(const char *big, const char *little, unsigned int len)
{
	char	*temp;

	temp = (char *)big;
	while (len > 0)
	{
		if (ft_strncmp(temp, little, size_of(little)) == 0)
			return (temp);
		temp++;
		len--;
	}
	return ('\0');
}
