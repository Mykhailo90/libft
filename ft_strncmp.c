/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarapii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/05 14:54:51 by msarapii          #+#    #+#             */
/*   Updated: 2017/11/21 01:30:48 by msarapii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (*s1 == '\0' && *s2)
		return (-1);
	if (*s1 && *s2 == '\0')
		return (1);
	if (*s1 == '\0' && *s2 == '\0')
		return (0);
	while (n-- && *(unsigned char *)s1)
	{
		if (!*(unsigned char *)s1 && *(unsigned char *)s2)
			return (-1);
		else if (!*(unsigned char *)s2 && *(unsigned char *)s1)
			return (1);
		else
		{
			if ((*(unsigned char *)s1 - *(unsigned char *)s2) < 0)
				return (-1);
			else if (*(unsigned char *)s1 - *(unsigned char *)s2 > 0)
				return (1);
		}
		s1++;
		s2++;
	}
	return (0);
}
