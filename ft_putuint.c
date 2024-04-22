/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paperez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 12:48:45 by paperez-          #+#    #+#             */
/*   Updated: 2024/04/22 12:51:08 by paperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printflib.h"

int	ft_putuint(int n)
{
	int	c;

	if (n < 0)
		n = -n;
	c = ft_putnbr(n);
	return (c);
}
