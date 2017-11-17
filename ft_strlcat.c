/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarapii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 15:34:34 by msarapii          #+#    #+#             */
/*   Updated: 2017/11/05 12:42:21 by msarapii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_end;
	size_t	k;

	k = 0;
	i = 0;
	while (src[k])
		k++;
	while (dst[i] && i < size)
		i++;
	dst_end = i;
	if (!size)
		return (dst_end);
	while (src[i - dst_end] && i < size - 1)
	{
		dst[i] = src[i - dst_end];
		i++;
	}
	if (dst_end < size)
		dst[i] = '\0';
	return (dst_end + k);
}
