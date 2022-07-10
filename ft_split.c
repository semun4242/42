/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semun <semun@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 16:14:46 by semun             #+#    #+#             */
/*   Updated: 2022/07/10 16:50:22 by semun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_charset(char splitc, char c)
{
	if (splitc == c)
		return (1);
	return (0);
}

int	split_size(char *str, char c)
{
	int	i;
	int	size;

	i = 0;
	size = 0;
	while (*str)
	{
		if (!is_charset(*str, c))
		{
			size++;
			while (*str && !is_charset(*str, c))
				str++;
		}
		str++;
	}
	return (size);
}

char	*ac_str(char *src, char c, int nb)
{
	int		len;
	char	*str;
	int		i;

	len = 0;
	str = 0;
	i = nb;
	while (src[i] && !is_charset(src[i], c))
		i++;
	str = (char *)malloc(sizeof(char) * (i - nb + 1));
	len = 0;
	while (src[nb] && nb < i)
	{
		str[len] = src[nb];
		len++;
		nb++;
	}
	str[len] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**ptr;
	int		len;

	i = 0;
	j = 0;
	len = split_size((char *)s, c);
	ptr = (char **)malloc(sizeof(char *) * (len + 1));
	if (!ptr)
		return (0);
	while (i < len)
	{
		while (s[j] && is_charset(s[j], c))
			j++;
		ptr[i] = ac_str((char *)s, c, j);
		while (s[j] && !is_charset(s[j], c))
			j++;
		i++;
	}
	ptr[i] = 0;
	return (ptr);
}
