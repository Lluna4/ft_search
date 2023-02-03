/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltranca- <ltranca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 14:48:02 by ltranca-          #+#    #+#             */
/*   Updated: 2022/12/04 17:38:53 by ltranca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *a)

{
	size_t	n;

	n = 0;
	while (*a)
	{
		n++;
		a++;
	}
	return (n);
}

/* int main(void)
{
	int c;
	int d;

	c = ft_strlen("hola buenas");
	d = strlen("hola buenas");
	printf("%d\n", c);
	printf("%d", d);
} */
