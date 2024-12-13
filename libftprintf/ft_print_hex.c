/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haruki <haruki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 16:16:47 by hkasamat          #+#    #+#             */
/*   Updated: 2024/12/11 00:43:01 by haruki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int hex_size(int num)
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
		num /= 16;
		i++;
	}
	return i;
}

int ft_print_hex_lower(int num)
{
	if(num >= 16){
		ft_print_unsigned_num(num / 16);
		if(num%16 >= 10)
			ft_print_char(num % 16 + 'a' - 10);
		else
			ft_print_char(num % 16 + '0');
	}
	else
		ft_print_char(num + '0');
	return hex_size(num);
}

int ft_print_hex_upper(int num)
{
	if(num >= 16){
		ft_print_unsigned_num(num / 16);
		if(num%16 >= 10)
			ft_print_char(num % 16 + 'A' - 10);
		else
			ft_print_char(num % 16 + '0');
	}
	else
		ft_print_char(num + '0');
	return hex_size(num);
}