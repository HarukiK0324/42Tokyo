/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haruki <haruki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 13:46:57 by haruki            #+#    #+#             */
/*   Updated: 2024/12/11 00:40:32 by haruki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_printf(const char *format, ...)
{
    va_list args;
    va_start(args, format);
    while(*format != '\0')
    {
        if(*format == '%')
        {
            format++;
            if(format == 'c') //char
                return (ft_print_char(va_arg(args,char)));
            else if(format == 's') //string 
                return ft_print_string(va_arg(args, char *));
            else if(format == 'p') //pointer
                return ft_print_pointer(va_arg(args, void *));
            else if(format == 'd') //decimal base 10
                return ft_print_num(va_arg(args, int));
            else if(format == 'i') //integer
                return ft_print_num(va_arg(args, int));
            else if(format == 'u') //unsigned decimal base 10
                return ft_print_unsigned_num(va_arg(args, unsigned int));
            else if(format == 'x') //hexadecimal lowercase
                return ft_print_hex_lower(va_arg(args, int));
            else if(format == 'X') //hexadecimal uppercase
                return ft_print_hex_upper(va_arg(args, int));
            else if(format == '%') //precent sign
                return ft_print_char('%');
        }
        else
            ft_print_char(*format);
        format++;
    }
}
