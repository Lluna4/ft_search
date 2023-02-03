/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltranca- <ltranca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:40:29 by ltranca-          #+#    #+#             */
/*   Updated: 2023/01/04 16:32:09 by ltranca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(long long int n, int iter, int ret)
{
	iter++;
	if (n == -2147483648)
		return (ft_putstr("-2147483648"));
	if (iter == 0)
		ret = ft_intlen(n);
	if (n < 0)
	{
		if (ft_putchar('-') == -1)
			return (-1);
		n = n * -1;
		ret++;
	}
	if (n >= 10)
	{
		if (ft_putnbr(n / 10, iter, ret) == -1)
			return (-1);
		n = n % 10;
	}
	if (n < 10)
		if (ft_putchar(n + '0') == -1)
			return (-1);
	return (ret);
}
