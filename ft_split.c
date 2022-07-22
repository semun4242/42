/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semun <semun@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 16:14:46 by semun             #+#    #+#             */
/*   Updated: 2022/07/22 15:45:38 by semun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_malloc_error(char **ptr)
{
	int	i;

	i = 0;
	while (ptr[i])
		free(ptr[i++]);
	free(ptr);
	return (0);
}

static int	split_size(char *str, char c)
{
	int	i;
	int	size;

	i = 0;
	size = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			size++;
			while (str[i] && str[i] != c)
				i++;
		}
		else
			i++;
	}
	return (size);
}

static char	*ac_str(char *src, char c, int nb)
{
	int		len;
	char	*str;
	int		i;

	len = 0;
	i = nb;
	while (src[i] && src[i] != c)
		i++;
	str = (char *)malloc(sizeof(char) * (i - nb + 1));
	if (!str)
		return (0);
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
	if (!s)
		return (NULL);
	len = split_size((char *)s, c);
	ptr = (char **)malloc(sizeof(char *) * (len + 1));
	if (!ptr)
		return (NULL);
	while (i < len)
	{
		while (s[j] && s[j] == c)
			j++;
		ptr[i] = ac_str((char *)s, c, j);
		if (!ptr[i++])
			return (ft_malloc_error(ptr));
		while (s[j] && s[j] != c)
			j++;
	}
	ptr[i] = 0;
	return (ptr);
}
