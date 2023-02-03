/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltranca- <ltranca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:35:25 by ltranca-          #+#    #+#             */
/*   Updated: 2023/01/04 16:33:36 by ltranca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	flags(va_list pointer, char *args, int aux)
{
	int	ret;

	ret = 0;
	args++;
	if (*args == 'c')
		ret += ft_putchar((char)va_arg(pointer, int));
	if (*args == 'p')
	{
		aux = ft_putptr((unsigned long)va_arg(pointer, void *), 'x', 0);
		if (aux == -1)
			return (-1);
		ret += aux + 2;
	}
	if (*args == 's')
		ret += ft_putstr(va_arg(pointer, char *));
	if (*args == 'i' || *args == 'd')
		ret += ft_putnbr((int)va_arg(pointer, int), -1, 0);
	if (*args == 'u')
		ret += ft_putnbr((unsigned int)va_arg(pointer, unsigned int), -1, 0);
	if (*args == 'x' || *args == 'X')
		ret += ft_puthex(va_arg(pointer, unsigned int), *args, 0);
	if (*args == '%')
		ret += ft_putchar('%');
	return (ret);
}

int	ft_printf(const char *args, ...)
{
	va_list	pointer;
	int		ret;
	int		aux;

	ret = 0;
	aux = 0;
	va_start(pointer, args);
	while (*args)
	{
		if (!args)
			break ;
		if (*args == '%')
		{
			aux = flags(pointer, (char *)args++, 0);
			if (*args == '+' || *args == ' ')
				args++;
		}
		else
			aux = ft_putchar(*args);
		if (aux == -1)
			return (-1);
		ret += aux;
		args++;
	}
	return (ret);
}
