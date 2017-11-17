/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarapii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 19:24:41 by msarapii          #+#    #+#             */
/*   Updated: 2017/11/15 19:33:49 by msarapii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	tmp;
	char			*res;
	size_t			i;

	res = NULL;
	i = 0;
	tmp = 0;
	if (s)
		while (s[i])
			i++;
	if (i)
		res = (char *)ft_memalloc(sizeof(char) * (i + 1));
	if (res)
	{
		while (s[tmp])
		{
			res[tmp] = f(tmp, s[tmp]);
			tmp++;
		}
		res[tmp] = '\0';
	}
	return (res);
}
