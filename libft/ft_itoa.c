/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkasamat <hkasamat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 16:23:43 by hkasamat          #+#    #+#             */
/*   Updated: 2024/11/09 19:03:20 by hkasamat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	count_digit(int n)
{
	int	i;
	int	base;

	i = 1;
	base = 10;
	while (n >= base)
	{
		base *= 10;
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
	str[i + 1] = '\0';
	while (i > 0)
	{
		str[i] = n % 10;
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
		return ("-2147483648");
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
		str[i - 1] = n % 10;
		n /= 10;
		i--;
	}
	return (str);
}
