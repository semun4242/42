/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semun <semun@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 17:47:06 by semun             #+#    #+#             */
/*   Updated: 2022/07/20 18:24:50 by semun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	unsigned int	str_len;
	unsigned int	to_find_len;

	str_len = 0;
	if (!needle[0])
		return ((char *)haystack);
	while (haystack[str_len] && str_len < n)
	{
		to_find_len = 0;
		while (haystack[str_len + to_find_len] == needle[to_find_len] \
			&& (str_len + to_find_len) < n)
		{
			to_find_len++;
			if (needle[to_find_len] == '\0')
				return ((char *)&haystack[str_len]);
		}
		str_len++;
	}
	return (0);
}
