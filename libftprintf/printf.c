/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haruki <haruki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 13:46:57 by haruki            #+#    #+#             */
/*   Updated: 2024/12/09 16:51:45 by haruki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int ft_print_special(void *arg, char format)
{
    
}



int ft_printf(const char *format, ...)
{
    va_list args;
    va_start(args, format);
    while(*format != '\0')
    {
        if(*format == '%')
        {
            format++;
            // ft_print_special(va_arg(args, void *), *format);
            if(format == 'c') //char
                return (ft_print_char(va_arg(args,char)));
            else if(format == 's') //string 
                return ft_print_string(va_arg(args, char *));
            else if(format == 'p') //pointer
                return putchar_custom(va_arg(args, void *));
            else if(format == 'd') //decimal base 10
                return putchar_custom('%');
            else if(format == 'i') //hexadecimal base 16
                return ft_print_hex_custom(va_arg(args, unsigned int));
            else if(format == 'u') //hexadecimal base 16 uppercase
                return ft_print_hex_upper_custom(va_arg(args, unsigned int));
            else if(format == 'x') //pointer
                return ft_print_pointer_custom(va_arg(args, void *));
            else if(format == 'X') //unsigned int
                return ft_print_unsigned_custom(va_arg(args, unsigned int));
            else if(format == '%') //integer
                return ft_print_num_custom(va_arg(args, int));
        }
        else
            putchar_custom(*format);
        format++;
    }
}
