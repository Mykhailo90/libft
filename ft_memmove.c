/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarapii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 16:05:19 by msarapii          #+#    #+#             */
/*   Updated: 2017/11/21 01:01:07 by msarapii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d1;

	d1 = (char *)dest;
	if ((src - dest) < 0)
	{
		d1 = (char *)dest + n - 1;
		src = (char *)src + n - 1;
		while (n--)
			*(d1--) = *(char *)(src--);
		return (dest);
	}
	else if ((src - dest) > 0)
	{
		while (n--)
			*(d1++) = *(char *)(src++);
		return (0);
	}
	return (dest);
}
