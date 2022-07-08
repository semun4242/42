/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semun <semun@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 18:53:31 by semun             #+#    #+#             */
/*   Updated: 2022/07/08 19:48:01 by semun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	i;
	size_t	dest_len;
	size_t	s_len;

	s_len = ft_strlen((char *)s);
	if (!s)
		return (0);
	if (s_len < start)
		len = 0;
	dest = (char *)malloc(sizeof(char) * (len + 1));
	i = start;
	dest_len = 0;
	while (s[i] && dest_len < len)
	{
		dest[dest_len++] = s[i++];
	}
	dest[dest_len] = '\0';
	return (dest);
}
