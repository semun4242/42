/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semun <semun@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 16:03:42 by semun             #+#    #+#             */
/*   Updated: 2022/07/08 16:23:59 by semun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		lt;
	char	*src;

	src = (char *)s;
	i = 0;
	lt = -1;
	while (src[i])
	{
		if (src[i] == c)
		{
			lt = i;
		}
		i++;
	}
	if (src[i] == c)
		return (src + i);
	if (lt == -1)
		return (0);
	return (src + lt);
}
