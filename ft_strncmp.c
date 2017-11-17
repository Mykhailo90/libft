/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarapii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/05 14:54:51 by msarapii          #+#    #+#             */
/*   Updated: 2017/11/05 14:59:12 by msarapii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const unsigned char *s1, const unsigned char *s2, size_t n)
{
	if (*s1 == '\0' && *s2)
		return (-1);
	if (*s1 && *s2 == '\0')
		return (1);
	if (*s1 == '\0' && *s2 == '\0')
		return (0);
	while (n-- && *s1)
	{
		if (!*s1 && *s2)
			return (-1);
		else if (!*s2 && *s1)
			return (1);
		else
		{
			if ((*s1 - *s2) < 0)
				return (-1);
			else if (*s1 - *s2 > 0)
				return (1);
		}
		s1++;
		s2++;
	}
	return (0);
}
