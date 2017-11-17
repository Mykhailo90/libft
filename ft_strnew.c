/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarapii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 18:17:05 by msarapii          #+#    #+#             */
/*   Updated: 2017/11/15 11:48:12 by msarapii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned char	*ft_strnew(size_t size)
{
	unsigned char	*p;

	p = NULL;
	if (size)
		p = (unsigned char *)ft_memalloc(size + 1);
	if (p)
		p[size] = '\0';
	return (p);
}
