/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkasamat <hkasamat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 16:23:43 by hkasamat          #+#    #+#             */
/*   Updated: 2024/11/30 18:43:53 by hkasamat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	count_digit(int n)
{
	int	i;
	int	base;

	i = 0;
	base = 10;
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*odd_itoa(int n)
{
	int		i;
	char	*str;

	i = count_digit(n);
	str = malloc(count_digit(n) + 2);
	if (str == (void *)0)
		return ((void *)0);
	str[i + 1] = '\0';
	while (i > 0)
	{
		str[i] = '0' + (n % 10);
		n /= 10;
		i--;
	}
	str[i] = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	else if (n == 0)
		return (ft_strdup("0"));
	else if (n < 0)
	{
		n = -n;
		return (odd_itoa(n));
	}
	str = malloc(count_digit(n) + 1);
	if (str == (void *)0)
		return ((void *)0);
	i = count_digit(n);
	str[i] = '\0';
	while (i > 0)
	{
		str[i - 1] = '0' + (n % 10);
		n /= 10;
		i--;
	}
	return (str);
}
