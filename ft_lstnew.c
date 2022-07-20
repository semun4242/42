/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semun <semun@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 19:15:17 by semun             #+#    #+#             */
/*   Updated: 2022/07/20 14:40:09 by semun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*clst;

	clst = (t_list *)malloc(sizeof(t_list));
	if (!clst)
		return (NULL);
	clst->content = content;
	clst->next = NULL;
	return (clst);
}
