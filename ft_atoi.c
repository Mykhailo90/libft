/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarapii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/05 14:59:53 by msarapii          #+#    #+#             */
/*   Updated: 2017/11/13 17:35:08 by msarapii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			is_it_space(char ch)
{
	if ((ch == '\t' || ch == '\v' || ch == '\f') ||
		(ch == '\r' || ch == ' ' || ch == '\n'))
		return (1);
	else
		return (0);
}

int			ft_atoi(const char *nptr)
{
	int			is_negative;
	long int	res;
	long int	min;
	long int	max;
	long int	form;

	min = -9223372036854775807L - 1L;
	is_negative = 0;
	max = 9223372036854775807L;
	res = 0;
	form = (res * 10 + (*nptr - '0'));
	while (is_it_space(*nptr))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
		is_negative = (*(nptr++) == '-') ? 1 : 0;
	while (*nptr >= '0' && *nptr <= '9')
	{
		form = (res * 10 + (*nptr - '0'));
		if (is_negative)
			res = (-form < min) ? 0 : form;
		else
			res = (form > max) ? -1 : form;
		nptr++;
	}
	return (is_negative) ? (int)-res : (int)res;
}
