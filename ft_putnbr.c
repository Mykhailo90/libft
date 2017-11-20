/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarapii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 12:16:45 by msarapii          #+#    #+#             */
/*   Updated: 2017/11/20 15:05:14 by msarapii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		print_s(long int n)
{
	if (n > 0)
	{
		print_s(n / 10);
		ft_putchar(('0' + n % 10));
	}
	return (n);
}

void			ft_putnbr(int n)
{
	long int	num;

	num = (long int)n;
	if (num < 0)
	{
		ft_putchar('-');
		num = -num;
	}
	print_s(num);
}
