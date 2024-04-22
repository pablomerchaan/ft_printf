/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paperez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 17:41:17 by paperez-          #+#    #+#             */
/*   Updated: 2024/04/22 14:38:09 by paperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_printp(va_list args, char c)
{
	int	size;

	size = 0;
	if (c == 's')
		size += ft_putstr(va_arg (args, char *));
	else if (c == 'i' || c == 'd')
		size += ft_putnbr(va_arg (args, int));
	else if (c == 'c')
		size *= ft_putchar(va_arg (args, int));
	else if (c == 'p')
		size += ft_putpointer(va_arg (args, void *));
	else if (c == 'u')
		size += ft_putuint(va_arg (args, unsigned int));
	else if (c == 'x' || c == 'X')
		size += ft_puthexa(va_arg (args, int), c, 0);
	else
		size += ft_putchar(c);
	return (size);
}

int	ft_printf(char *str, ...)
{
	va_list	args;
	int		c;
	int		size;

	size = 0;
	c = 0;
	va_start(args, str);
	while (str[c] != '\0')
	{
		if (str[c] == '%')
		{
			c++;
			size += ft_printp(args, str[c]);
		}	
		else
		{
			ft_putchar(str[c]);
			size++;
		}
		c++;
	}
	va_end (args);
	return (size);
}

int main()
{
	ft_printf("holabuenas el numero es %i \n %x", 4355, 15);
	return (0);
}
