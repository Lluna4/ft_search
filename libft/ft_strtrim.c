/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltranca- <ltranca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 13:56:12 by ltranca-          #+#    #+#             */
/*   Updated: 2022/12/12 16:14:58 by ltranca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_make_ret(char *s1, char *backpointer)
{
	int		n;
	char	*ret;

	n = 0;
	if (*s1 == '\0')
		return (ft_strdup(""));
	ret = ft_calloc(ft_strlen(s1--) - ft_strlen(backpointer) + 2, sizeof(char));
	if (!ret)
		return (NULL);
	while (s1++ != backpointer)
	{
		n++;
		*ret = *s1;
		ret++;
	}
	return (ret - n);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*backpointer;
	int		n;

	backpointer = (char *)&s1[ft_strlen(s1) - 1];
	while (*s1)
	{
		n = -1;
		while (*set)
		{
			n++;
			if (*s1 == *set || *backpointer == *set)
			{
				if (*s1 == *set)
					s1++;
				if (*backpointer == *set)
					backpointer--;
				break ;
			}
			set++;
		}
		if (!(*set))
			break ;
		set = set - n;
	}
	return (ft_make_ret((char *)s1, backpointer));
}
