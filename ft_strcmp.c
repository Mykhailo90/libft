/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarapii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/05 13:49:40 by msarapii          #+#    #+#             */
/*   Updated: 2017/11/21 01:30:16 by msarapii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_strcmp(const char *s1, const char *s2)
{
	unsigned char	*r1;
	unsigned char	*r2;

	r1 = (unsigned char *)s1;
	r2 = (unsigned char *)s2;
	while (*r1 != '\0' || *r2 != '\0')
	{
		if (*r1 == '\0' && *r2 != '\0')
			return (-1);
		else if (*r2 == '\0' && *r1 != '\0')
			return (1);
		else
		{
			if ((*r1 - *r2) < 0)
				return (-1);
			else if (*r1 - *r2 > 0)
				return (1);
		}
		r1++;
		r2++;
	}
	return (0);
}
