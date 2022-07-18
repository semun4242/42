/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semun <semun@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 19:56:01 by semun             #+#    #+#             */
/*   Updated: 2022/07/18 15:23:53 by semun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*nlst;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		nlst = (*lst)->next;
		ft_lstdelone(*lst, del);
		(*lst) = nlst;
	}
	nlst = NULL;
}
