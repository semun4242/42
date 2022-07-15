/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semun <semun@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 19:08:39 by semun             #+#    #+#             */
/*   Updated: 2022/07/15 17:51:34 by semun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	int_to_string(int a, int fd)
{
	char	c;
	int		tmp;

	if (a == 0)
		return ;
	tmp = a;
	c = tmp % 10 + 48;
	int_to_string(tmp / 10, fd);
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int nb, int fd)
{
	if (nb == -2147483648)
	{
		write(fd, "-2147483648", 11);
	}
	else if (nb == 0)
		write(fd, "0", 1);
	else if (nb < 0)
	{
		write(fd, "-", 1);
		int_to_string(-nb, fd);
	}
	else
		int_to_string(nb, fd);
}
