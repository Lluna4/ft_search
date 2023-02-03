/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltranca- <ltranca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:35:56 by ltranca-          #+#    #+#             */
/*   Updated: 2022/12/12 16:13:58 by ltranca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *a, int ch)

{
	int	index;

	index = ft_strlen(a);
	while (index >= 0)
	{
		if ((unsigned char)a[index] == (unsigned char)ch)
			return ((char *)a + index);
		index--;
	}
	return (0);
}

/* int main(void)
{
	char *c;
	char *d;
	char *b = "hola buenas";

	c = ft_strchr(b, 'n');
	d = strrchr(b, 'n');
	printf("%s\n", c);
	printf("%s", d);
} */