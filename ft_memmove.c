/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semun <semun@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 16:38:20 by semun             #+#    #+#             */
/*   Updated: 2022/07/15 15:48:58 by semun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;
	unsigned int	i;

	if (!dst && !src)
		return (NULL);
	i = -1;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (d <= s)
	{
		while (++i < len)
			d[i] = s[i];
	}
	else
	{
		i += len + 1;
		while (len--)
		{
			--i;
			d[i] = s[i];
		}
	}
	return (dst);
}
