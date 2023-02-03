/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltranca- <ltranca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 12:07:50 by ltranca-          #+#    #+#             */
/*   Updated: 2022/12/12 18:10:58 by ltranca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_test(char *a, size_t len2, size_t s, char *b)
{
	int	n;

	while (len2 > (ft_strlen(b) - 1) && *a != '\0' && (len2 - ft_strlen(a)) < s)
	{
		n = (ft_strlen(b) - 1);
		a = ft_strchr(a, b[0]);
		if (a == NULL)
			return (0);
		a = a + (ft_strlen(b) - 1);
		if ((len2 - (ft_strlen(a) - 1)) > (unsigned int)s)
			break ;
		while (n != 0)
		{
			if (*a != b[n])
			{
				a = a - n + 1;
				break ;
			}
			a--;
			n--;
		}
		if (n == 0)
			return ((char *)a);
	}
	return (0);
}

char	*ft_strnstr(const char *a, const char *b, size_t size)
{
	int		len2;

	len2 = ft_strlen(a);
	if ((unsigned int)size > ft_strlen(a) || (int)size < 0)
		size = ft_strlen(a);
	if (*b == '\0')
		return ((char *)a);
	return (ft_test((char *)a, (size_t)len2, (size_t)size, (char *)b));
}

/*
int main(void)
{
	char *c;
	char *d;
	char *b = "aaabcabcd";
	char *e = "aabc";

	c = ft_strnstr(b, e, -1);
	d = strnstr(b, e, -1);
	printf("%s\n", c);
	printf("%s", d);
}*/