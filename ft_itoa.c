/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semun <semun@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 17:15:53 by semun             #+#    #+#             */
/*   Updated: 2022/07/15 17:49:57 by semun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	interger_len(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		len++;
		n *= -1;
	}
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*dest;
	int				len;
	unsigned int	tmp;

	len = interger_len(n);
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (0);
	if (n < 0)
	{
		dest[0] = '-';
		n *= -1;
	}
	else if (n == 0)
		dest[0] = '0';
	tmp = (unsigned int)n;
	dest[len] = '\0';
	while (tmp != 0)
	{
		dest[--len] = (tmp % 10) + '0';
		tmp = tmp / 10;
	}
	return (dest);
}
