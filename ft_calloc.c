/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semun <semun@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 18:46:46 by semun             #+#    #+#             */
/*   Updated: 2022/07/08 18:52:09 by semun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t			i;
	unsigned char	*dest;

	dest = (unsigned char *)malloc(size * (count + 1));
	i = 0;
	while (i < count)
	{
		dest[i++] = 0;
	}
	dest[i] = '\0';
	return (dest);
}
