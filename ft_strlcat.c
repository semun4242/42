/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semun <semun@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 12:02:17 by semun             #+#    #+#             */
/*   Updated: 2022/07/20 18:25:45 by semun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dest_len;
	size_t	cat_len;

	src_len = ft_strlen((char *)src);
	dest_len = 0;
	cat_len = 0;
	while (dst[dest_len] && dest_len < size)
		dest_len++;
	while (src[cat_len] && (dest_len + cat_len + 1) < size)
	{
		dst[dest_len + cat_len] = src[cat_len];
		cat_len++;
	}
	if (dest_len < size)
		dst[dest_len + cat_len] = '\0';
	return (dest_len + src_len);
}
