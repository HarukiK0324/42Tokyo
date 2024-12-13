/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haruki <haruki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 13:48:07 by haruki            #+#    #+#             */
/*   Updated: 2024/12/13 17:24:25 by haruki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int ft_printf(const char *, ...);
int	ft_print_char(char c);
int	ft_print_string(char c);
int	ft_strlen(const char *s);
int	ft_print_num(char *c);
int ft_print_unsigned_num(unsigned int num);
int ft_print_hex_lower(unsigned int num);
int ft_print_hex_upper(unsigned int num);
int hex_size(int num);
int ft_digits(int num);
int ft_unsigned_digits(unsigned int num)

#endif