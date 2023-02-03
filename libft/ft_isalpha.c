/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltranca- <ltranca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 13:05:58 by ltranca-          #+#    #+#             */
/*   Updated: 2022/09/19 17:25:25 by ltranca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int a)

{
	if (a >= 65 && a <= 90)
	{
		return (1);
	}
	if (a >= 97 && a <= 122)
	{
		return (1);
	}
	return (0);
}

/* int	main(void)
{
	char	r;
	int		c;
	int		d;

	r = 'a';
	c = ft_isalpha(r);
	d = isalpha(r);
	printf("%d\n", c);
	printf("%d", d);
} */