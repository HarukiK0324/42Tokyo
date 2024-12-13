/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haruki <haruki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 13:46:57 by haruki            #+#    #+#             */
/*   Updated: 2024/12/13 21:23:42 by haruki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_specifier(char format, va_list args)
{
	if (format == 'c') // char
		return (ft_print_char(va_arg(args, int)));
	else if (format == 's') // string
		return (ft_print_string(va_arg(args, char *)));
	else if (format == 'p') // pointer
		return (ft_print_pointer(va_arg(args, void *)));
	else if (format == 'd' || format == 'i') // decimal base 10 & integer
		return (ft_print_num(va_arg(args, int)));
	else if (format == 'u') // unsigned decimal base 10
		return (ft_print_unsigned_num(va_arg(args, unsigned int)));
	else if (format == 'x') // hexadecimal lowercase
		return (ft_print_hex_lower(va_arg(args, unsigned int)));
	else if (format == 'X') // hexadecimal uppercase
		return (ft_print_hex_upper(va_arg(args, unsigned int)));
	else if (format == '%') // precent sign
		return (ft_print_char('%'));
	else
		return (-1);
}
int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		result;

	va_start(args, (char *)format);
	i = 0;
	result = 0;
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format != '\0')
			{
				result = handle_specifier(*format, args);
				if (result == -1)
					return -1;
				i += result;
			}
		}
		else
			i += ft_print_char(*format);
		format++;
	}
    va_end(args);
	return (i);
}

int main(void) {
    ft_printf("%d", 1);
    return 0;
}