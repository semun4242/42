/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semun <semun@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 20:00:25 by semun             #+#    #+#             */
/*   Updated: 2022/07/15 17:46:37 by semun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *nlst;
	
	nlst = lst;
	while (lst)
	{
		nlst = ft_lstnew((*f)(lst->content));
		if (!nlst)
		{
			del(nlst->content);
			free(nlst);
		}
		lst = lst->next;
	}
	return (nlst);
}