/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semun <semun@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 20:00:25 by semun             #+#    #+#             */
/*   Updated: 2022/07/22 19:15:23 by semun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nlst;
	t_list	*clst;

	clst = NULL;
	while (lst)
	{
		nlst = ft_lstnew(f(lst->content));
		if (!nlst)
		{
			ft_lstclear(&clst, del);
			return (NULL);
		}
		ft_lstadd_back(&clst, nlst);
		lst = lst->next;
	}
	nlst = 0;
	return (clst);
}
