/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarapii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 23:25:57 by msarapii          #+#    #+#             */
/*   Updated: 2017/11/21 00:55:52 by msarapii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*start;

	start = NULL;
	if (lst && f)
	{
		start = ft_lstnew(NULL, 0);
		start = f(lst);
		while (lst)
		{
			lst = lst->next;
			ft_lstadd(&start, f(lst));
		}
	}
	return (start);
}
