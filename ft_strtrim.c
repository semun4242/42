/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semun <semun@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 20:01:20 by semun             #+#    #+#             */
/*   Updated: 2022/07/15 16:02:02 by semun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*s;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	j = ft_strlen((char *)s1);
	while (s1[j - 1])
	{
		if (ft_strchr(set, s1[j - 1]) && (j > i))
			j--;
		else
			break ;
	}
	s = (char *)malloc(sizeof(char) * (j - i + 1));
	if (s)
		ft_strlcpy(s, &s1[i], j - i + 1);
	return (s);
}
