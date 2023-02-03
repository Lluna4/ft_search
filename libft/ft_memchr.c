/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltranca- <ltranca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 13:52:57 by ltranca-          #+#    #+#             */
/*   Updated: 2022/11/22 12:55:28 by ltranca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t size)

{
	unsigned char	chr;

	chr = (unsigned char)c;
	while (size > 0)
	{
		if (*(unsigned char *)s == chr)
			return (((unsigned char *)s));
		size--;
		s++;
	}
	return (0);
}

/* int main(void)
{
	char *c;
	char *d = "hola";
	c = ft_memchr(d, 'o', 5);
	//d = memchr("hola", 'o', 5);
	printf("%s", c);
	//printf("%s", d);
} */
