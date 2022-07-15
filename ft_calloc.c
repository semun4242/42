/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semun <semun@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 18:46:46 by semun             #+#    #+#             */
/*   Updated: 2022/07/15 17:47:26 by semun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*dest;

	dest = (unsigned char *)malloc(size * count);
	if (!dest)
		return (NULL);
	ft_bzero(dest, count * size);
	return (dest);
}
