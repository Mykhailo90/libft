/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarapii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/05 13:49:40 by msarapii          #+#    #+#             */
/*   Updated: 2017/11/06 14:12:30 by msarapii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const unsigned char *s1, const unsigned char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 == '\0' && *s2 != '\0')
			return (-1);
		else if (*s2 == '\0' && *s1 != '\0')
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
