/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haruki <haruki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 14:25:45 by hkasamat          #+#    #+#             */
/*   Updated: 2024/11/15 14:45:37 by haruki           ###   ########.fr       */
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
	char *temp1;
	char *temp2;

	temp1 = (char *)s1;
	temp2 = (char *)s2;
	while (*temp1 != '\0' && (*temp1 == *temp2) && n > 0)
	{
		temp1++;
		temp2++;
		n--;
	}
	if (n == 0)
		return (0);
	return ((int)*temp1 - (int)*temp2);
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
	return (void *)0;
}
