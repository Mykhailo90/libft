/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarapii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 16:05:19 by msarapii          #+#    #+#             */
/*   Updated: 2017/11/05 12:28:36 by msarapii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d1;

	d1 = (unsigned char *)dest;
	if ((src - dest) < 0)
	{
		d1 = (unsigned char *)dest + n - 1;
		src = (unsigned char *)src + n - 1;
		while (n--)
			*(d1--) = *(unsigned char *)(src--);
		return (dest);
	}
	else if ((src - dest) > 0)
	{
		while (n--)
			*(d1++) = *(unsigned char *)(src++);
		return (0);
	}
	return (dest);
}
