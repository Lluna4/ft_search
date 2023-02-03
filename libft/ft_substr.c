/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltranca- <ltranca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 17:59:22 by ltranca-          #+#    #+#             */
/*   Updated: 2022/12/12 16:16:17 by ltranca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*a;

	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (ft_strlen(&s[start]) < len)
		len = ft_strlen(&s[start]);
	a = ft_calloc(len + 1, sizeof(char));
	if (!a)
		return (0);
	ft_strlcpy(a, &s[start], len + (size_t)1);
	return (a);
}

/*
int main(void)
{
	printf("%s", ft_substr("hola", 2, 4));
}*/