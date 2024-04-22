/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paperez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 12:31:20 by paperez-          #+#    #+#             */
/*   Updated: 2024/04/22 14:27:14 by paperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_negativech(int nb)
{
	if (nb < 0 && nb != -2147483648)
	{
		nb = -nb;
		write (1, "-", 1);
	}
	if (nb == -2147483648)
	{
		write (1, "-", 1);
		write (1, "2", 1);
		nb = 147483648;
	}
	return (nb);
}

static int	numlen(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count++;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

int	ft_putnbr(int nb)
{
	int		c;
	char	d[1];
	int		e;
	int		count;

	e = 0;
	count = numlen(nb);
	if (nb < 0)
		nb = ft_negativech (nb);
	c = nb;
	if (nb > 9)
	{
		c %= 10;
		ft_putnbr(nb / 10);
	}
	d[0] = c + '0';
	write (1, d, 1);
	return (count);
}
