/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarapii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 15:12:40 by msarapii          #+#    #+#             */
/*   Updated: 2017/11/16 16:44:20 by msarapii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	char	*res;
	char	*start;
	size_t	tmp;
	size_t	len;

	if (!s)
		return (NULL);
	res = NULL;
	tmp = 0;
	len = ft_strlen(s);
	while (*s == ' ' || *s == '\n' || *s == '\t')
	{
		tmp++;
		s++;
	}
	if (*s == '\0')
		return ((char *)s);
	start = (char *)s;
	s = start + len - tmp - 1;
	while (*s == ' ' || *s == '\n' || *s == '\t')
	{
		tmp++;
		s--;
	}
	if (s)
		res = ft_memalloc(len - tmp + 1);
	if (res)
		ft_strncpy(res, start, (len - tmp));
	return (res);
}
