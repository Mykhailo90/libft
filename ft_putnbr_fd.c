/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarapii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 14:50:35 by msarapii          #+#    #+#             */
/*   Updated: 2017/11/20 15:08:42 by msarapii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	fd_print_s(long int n, int fd)
{
	if (n > 0)
	{
		fd_print_s(n / 10, fd);
		ft_putchar_fd(('0' + n % 10), fd);
	}
	return (n);
}

void		ft_putnbr_fd(int n, int fd)
{
	long int	num;

	num = (long int)n;
	if (num < 0)
	{
		ft_putchar('-');
		num = -num;
	}
	fd_print_s(num, fd);
}
