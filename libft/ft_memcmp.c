/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltranca- <ltranca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 11:47:06 by ltranca-          #+#    #+#             */
/*   Updated: 2022/10/07 15:56:50 by ltranca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *a, const void *b, size_t size)

{
	size_t	n;

	n = 0;
	while (n < size)
	{
		if (((unsigned char *)a)[n] != ((unsigned char *)b)[n])
			return (((unsigned char *)a)[n] - ((unsigned char *)b)[n]);
		n++;
	}
	return (0);
}

/* int main(void)
{
	int c;
	c = ft_memcmp("holb", "hola", 4);
	printf("%d", c);
} */