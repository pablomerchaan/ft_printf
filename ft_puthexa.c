/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paperez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 17:58:04 by paperez-          #+#    #+#             */
/*   Updated: 2024/04/22 14:24:27 by paperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	maphexa(unsigned int h, char c)
{
	char	res;

	if (h > 9 && c == 'x')
		res = (h - 10 + 'a');
	else if (h > 9 && c == 'X')
		res = (h - 10 + 'A');
	else
		res = h + '0';
	return (res);
}

static int	initcount(int count)
{
	if (count == 0)
	{
		write (1, "0x", 2);
		count += 2;
	}
	return (count);
}

int	ft_puthexa(unsigned int h, const char c, int count)
{
	unsigned int	h2;
	char			s;

	count = initcount(count);
	if (h < 16)
	{
		s = maphexa(h, c);
		write (1, &s, 1);
		count++;
		return (count);
	}
	if (h >= 16)
	{
		h2 = h / 16;
		count = ft_puthexa(h2, c, count);
		s = maphexa(h % 16, c);
		write (1, &s, 1);
		count++;
	}
	return (count);
}
/*
int	main()
{
	int c;
	c = puthexa(0, 'X', 0);
	printf("%i", c);
	return (0);
}*/
