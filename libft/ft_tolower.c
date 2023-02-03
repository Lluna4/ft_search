/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltranca- <ltranca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 15:21:38 by ltranca-          #+#    #+#             */
/*   Updated: 2022/09/19 17:25:25 by ltranca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int a)
{
	if (a >= 65 && a <= 90)
	{
		return (a + 32);
	}
	return (a);
}

/* int main(void)
{
	char r;
	char c;
	char d;

	r = 'A';
	c = ft_tolower(r);
	d = tolower(r);
	printf("%c\n", c);
	printf("%c", d);
} */