/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paperez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 17:58:04 by paperez-          #+#    #+#             */
/*   Updated: 2024/04/22 13:31:39 by paperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTFLIB_H
#define PRINTFLIB_H

#include <unistd.h>
#include <stdarg.h>

int	ft_printf(char *str, ...);
int	ft_putnbr(int nb);
int	ft_puthexa(unsigned int h, const char c, int count);
int	ft_putpointer(void *p);
int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_putuint(int n);

#endif
