/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semun <semun@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 17:15:53 by semun             #+#    #+#             */
/*   Updated: 2022/07/10 20:39:04 by semun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long	interger_len(long long n)
{
	long long	len;

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
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*dest;
	int		len;
	int		i;

	i = 0;
	len = interger_len(n);
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (0);
	if (n < 0)
	{
		dest[i++] = '-';
		n *= -1;
	}
	dest[len] = '\0';
	while (n != 0)
	{
		dest[--len] = (n % 10) + '0';
		n = n / 10;
	}
	return (dest);
}
