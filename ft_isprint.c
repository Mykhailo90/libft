/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarapii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 10:40:03 by msarapii          #+#    #+#             */
/*   Updated: 2017/11/05 12:26:00 by msarapii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int character)
{
	if (character >= 32 && character <= 126)
		return (1);
	return (0);
}
