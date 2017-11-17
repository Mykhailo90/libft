/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarapii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/05 13:28:09 by msarapii          #+#    #+#             */
/*   Updated: 2017/11/13 18:36:05 by msarapii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned char	*ft_strnstr(const unsigned char *big,
							const unsigned char *little, size_t len)
{
	size_t	i;

	i = 0;
	if (*little == '\0')
		return ((unsigned char *)big);
	while (len && *big)
	{
		if (*big == little[i])
			i++;
		else
			i = 0;
		if (little[i] == '\0')
			return ((unsigned char *)(big - i + 1));
		big++;
		len--;
	}
	return (NULL);
}
