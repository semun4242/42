/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semun <semun@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 18:46:46 by semun             #+#    #+#             */
/*   Updated: 2022/07/10 17:03:41 by semun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t			i;
	unsigned char	*dest;

	dest = (unsigned char *)malloc(size * count);
	i = 0;
	if (!dest)
		return (0);
	while (i < (count * size))
		dest[i++] = 0;
	return (dest);
}
