/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltranca- <ltranca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 14:18:42 by ltranca-          #+#    #+#             */
/*   Updated: 2022/09/19 17:25:25 by ltranca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int a)

{
	if (a >= 48 && a <= 57)
	{
		return (1);
	}
	return (0);
}

/* int main(void)
{
	char r;
	int c;
	int d;

	r = '9';
	c = ft_isdigit(r);
	d = isdigit(r);
	printf("%d\n", c);
	printf("%d", d);
} */