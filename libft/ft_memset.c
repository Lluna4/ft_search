/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltranca- <ltranca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:42:23 by ltranca-          #+#    #+#             */
/*   Updated: 2022/09/19 17:25:25 by ltranca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int ch, size_t n)

{
	size_t	n2;
	char	*a;

	a = (char *)str;
	n2 = 0;
	while (n2 < n)
	{
		a[n2] = ch;
		n2++;
	}
	return (a);
}

/* int main(void)
{
	char m[50] = "Holaaaaaaa";
	int d = 'a';
	ft_memset(m, d, 4);
	printf("%s", m);
} */