/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarapii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 16:36:53 by msarapii          #+#    #+#             */
/*   Updated: 2017/11/15 18:54:10 by msarapii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char		*res;
	size_t		i;
	size_t		j;

	res = NULL;
	i = 0;
	j = 0;
	if (s)
		while (s[i])
			i++;
	if (i)
		res = (char *)ft_memalloc(sizeof(char) * (i + 1));
	if (res)
	{
		while (s[j])
		{
			res[j] = f(s[j]);
			j++;
		}
		res[j] = '\0';
	}
	return (res);
}
