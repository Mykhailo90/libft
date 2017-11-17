/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarapii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/05 10:26:25 by msarapii          #+#    #+#             */
/*   Updated: 2017/11/13 19:22:35 by msarapii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned char		*ft_strstr(const unsigned char *haystack,
								const unsigned char *needle)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!*needle)
		return ((unsigned char *)haystack);
	while (haystack[i])
	{
		j = 0;
		while (needle[j] == haystack[i + j])
		{
			if (needle[j + 1] == '\0')
				return ((unsigned char *)(haystack + i));
			j++;
		}
		i++;
	}
		return (0);
}
