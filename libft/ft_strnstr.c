/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haruki <haruki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 14:25:45 by hkasamat          #+#    #+#             */
/*   Updated: 2024/11/18 01:00:43 by haruki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static unsigned int	ft_strlen(const char *s)
{
	int	len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
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
	if(*little == '\0')
		return temp;
	while (*temp != '\0' && len >= ft_strlen(little))
	{
		if (ft_strncmp((const char *)temp, little, ft_strlen(little)) == 0)
			return (temp);
		temp++;
		len--;
	}
	return (void *)0;
}
