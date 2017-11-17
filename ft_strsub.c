/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarapii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 09:45:12 by msarapii          #+#    #+#             */
/*   Updated: 2017/11/16 10:13:30 by msarapii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char				*res;
	unsigned int		i;
	size_t				j;

	res = NULL;
	i = 0;
	j = 0;
	if (len)
		res = ft_memalloc(len + 1);
	if (res && s)
		ft_strncpy(res, &s[start], len);
	return (res);
}
