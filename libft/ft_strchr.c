/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltranca- <ltranca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 10:53:05 by ltranca-          #+#    #+#             */
/*   Updated: 2022/12/04 17:31:49 by ltranca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *a, int ch)

{
	return (ft_memchr(a, ch, ft_strlen(a) + 1));
}

/*
int main(void)
{
	char *c;
	char *d;
	char *b = "hola buenas";

	c = ft_strchr(b, 'n');
	d = strrchr(b, 'n');
	printf("%s\n", c);
	printf("%s", d);
} */