/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarapii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 10:35:41 by msarapii          #+#    #+#             */
/*   Updated: 2017/11/05 12:24:43 by msarapii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int character)
{
	if ((character >= 'a' && character <= 'z') ||
		(character >= 'A' && character <= 'Z'))
		return (1);
	return (0);
}
