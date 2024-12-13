/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haruki <haruki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 16:16:47 by hkasamat          #+#    #+#             */
/*   Updated: 2024/12/09 18:35:50 by haruki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_digits(int num)
{
	int i;

	i = 0;
	if(num < 0)
	{
		num *= -1;
		i++;
	}
	while(num)
	{
		num /= 10;
		i++;
	}
	return i;
}

int	ft_print_num(int num)
{
	if(num < 0)
		ft_print_char('-');
		num *= -1;
	while (num)
	{
		ft_print_char(num % 10 + '0');
		num /= 10;
	}
	return ft_digits(num);
}
