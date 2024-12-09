/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haruki <haruki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 13:46:57 by haruki            #+#    #+#             */
/*   Updated: 2024/12/09 10:47:49 by haruki           ###   ########.fr       */
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
            if(*format =='d')
                ft_print_num_custom(va_arg(args, int));
            else if(*format == 's')
                puts_custom(va_arg(args, char *));
            else if(*format == 'c')
                putchar_custom(va_arg(args, char));
            else if(*format == '%')
                putchar_custom('%');
            else if(*format == 'x')
                ft_print_hex_custom(va_arg(args, unsigned int));
            else if(*format == 'X')
                ft_print_hex_upper_custom(va_arg(args, unsigned int));
            else if(*format == 'p')
                ft_print_pointer_custom(va_arg(args, void *));
            else if(*format == 'u')
                ft_print_unsigned_custom(va_arg(args, unsigned int));
            else if(*format == 'i')
                ft_print_num_custom(va_arg(args, int));
        }
        else
            putchar_custom(*format);
        format++;
    }
}

// Helper function to write a character to stdout
void putchar_custom(char c) {
    write(1, &c, 1);  // 1 is the file descriptor for stdout
}

// Helper function to print a string
void puts_custom(const char *str) {
    while (*str) {
        putchar_custom(*str++);
    }
}

// Helper function to print an integer
void print_int_custom(int num) {
    if (num < 0) {
        putchar_custom('-');
        num = -num;
    }
    if (num / 10) {
        print_int_custom(num / 10);
    }
    putchar_custom('0' + (num % 10));
}
