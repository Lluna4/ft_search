/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltranca- <ltranca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 15:58:38 by ltranca-          #+#    #+#             */
/*   Updated: 2023/01/04 16:14:54 by ltranca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(unsigned long long n, char may, int iter)
{
	int	ret;
	int	sum;

	if (ft_putstr("0x") == -1)
		return (-1);
	if (may == 'X')
		sum = 55;
	else
		sum = 87;
	ret = ft_hexlen(n);
	if (n >= 16)
	{
		if (ft_puthex(n / 16, may, iter++) == -1)
			return (-1);
		n = n % 16;
	}
	if (n == 0 && iter == 0)
		return (ft_putchar('0'));
	if (n > 9)
		if (ft_putchar(n + sum) == -1)
			return (-1);
	if (n <= 9)
		if (ft_putchar(n + '0') == -1)
			return (-1);
	return (ret);
}
