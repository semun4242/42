/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semun <semun@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 19:15:17 by semun             #+#    #+#             */
/*   Updated: 2022/07/15 17:50:16 by semun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*clist;

	clist = (t_list *)malloc(sizeof(t_list));
	if (!clist)
		return (NULL);
	clist->content = content;
	clist->next = NULL;
	return (clist);
}
