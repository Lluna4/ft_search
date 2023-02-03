/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltranca- <ltranca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 17:39:47 by ltranca-          #+#    #+#             */
/*   Updated: 2022/12/04 17:40:23 by ltranca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ret;
	unsigned int	index;

	ret = ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!ret)
		return (NULL);
	index = 0;
	while (ft_strlen(s) > index)
	{
		ret[index] = f(index, s[index]);
		index++;
	}
	ret[index] = '\0';
	return (ret);
}
