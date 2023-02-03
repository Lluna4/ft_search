/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltranca- <ltranca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 12:08:34 by ltranca-          #+#    #+#             */
/*   Updated: 2022/10/07 13:18:02 by ltranca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t size)

{
	size_t	n;
	char	*buff;
	char	*buff2;

	n = 0;
	buff = (char *)dest;
	buff2 = (char *)src;
	if (buff != NULL || buff2 != NULL)
	{
		while (n < size)
		{
			buff[n] = buff2[n];
			n++;
		}
	}
	return (dest);
}
/* 
int main(void)
{
	char a[5];

	ft_memcpy(a, "hola", 5);
	printf("%s", a);
} */
