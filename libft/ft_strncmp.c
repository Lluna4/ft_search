/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltranca- <ltranca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:36:18 by ltranca-          #+#    #+#             */
/*   Updated: 2022/12/04 17:41:04 by ltranca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *a, const char *b, int ch)

{
	while (ch != 0 && (*a || *b))
	{
		if (*((unsigned char *)a) != *((unsigned char *)b))
			return (*((unsigned char *)a) - *((unsigned char *)b));
		a++;
		b++;
		ch--;
	}
	return (0);
}

/* int main(void)
{
	int c;
	int d;
	char *b = "hola buenas";
	char *e = "holabuenas";

	c = ft_strncmp(b, e, 11);
	d = strncmp(b, e, 11);
	printf("%d\n", c);
	printf("%d", d);
} */