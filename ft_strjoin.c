/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semun <semun@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 16:11:12 by semun             #+#    #+#             */
/*   Updated: 2022/07/08 19:47:39 by semun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	int		s1_len;
	int		s2_len;

	s1_len = ft_strlen((char *)s1);
	s2_len = ft_strlen((char *)s2);
	if (!s1 && !s2)
		return (0);
	dest = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	s1_len = 0;
	while (s1[s1_len])
	{
		dest[s1_len] = s1[s1_len];
		s1_len++;
	}
	s2_len = 0;
	while (s2[s2_len])
	{
		dest[s1_len] = s2[s2_len++];
		s1_len++;
	}
	dest[s1_len] = '\0';
	return (dest);
}
