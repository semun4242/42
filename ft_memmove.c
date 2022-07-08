/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semun <semun@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 16:38:20 by semun             #+#    #+#             */
/*   Updated: 2022/07/08 17:39:42 by semun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;
	unsigned int	i;

	i = 0;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (!d[i] && !s[i])
		return (0);
	while (i < len)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
