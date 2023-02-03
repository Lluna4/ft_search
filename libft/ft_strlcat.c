/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltranca- <ltranca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:07:25 by ltranca-          #+#    #+#             */
/*   Updated: 2022/12/04 17:36:29 by ltranca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		n;
	int			dstlen;
	int			srclen;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (dstsize <= 0)
		return (srclen);
	if (dstsize < (size_t)dstlen)
		srclen = srclen + dstsize;
	else
		srclen = srclen + dstlen;
	n = 0;
	while (*src && dstlen + n < dstsize - 1)
	{
		dst[dstlen + n] = *src;
		src++;
		n++;
	}
	dst[dstlen + n] = '\0';
	return (srclen);
}

/* int main(void)
{
	char m[50] = "Holaaaaaaa";
	char *d = "buenas";
	ft_strlcat(m, d, 9);
	printf("%s", m);
} */
