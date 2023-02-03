/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltranca- <ltranca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 15:10:29 by ltranca-          #+#    #+#             */
/*   Updated: 2022/11/22 15:14:15 by ltranca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)

{
	int		n;
	char	*ret;

	n = ft_strlen(s1);
	ret = malloc((n + 1) * sizeof(char));
	if (!ret)
		return (0);
	ret = ft_memcpy(ret, s1, n + 1);
	return (ret);
}

/* int main(void)
{
	char *a;
	a = ft_strdup("hola");
	printf("%s", a);
} */