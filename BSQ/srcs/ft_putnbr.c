/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/05 12:54:55 by slisandr          #+#    #+#             */
/*   Updated: 2019/03/16 21:16:58 by slisandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_putnbr(int nb)
{
	char	str[11];
	int		index;

	index = 0;
	if (nb < 0)
	{
		nb = nb * (-1);
		ft_putchar('-');
	}
	else if (nb == 0)
		ft_putchar('0');
	while (nb > 0)
	{
		str[index] = nb % 10;
		index = index + 1;
		nb = nb / 10;
	}
	str[index] = '\0';
	index = index - 1;
	while (index >= 0)
	{
		ft_putchar(str[index] + 48);
		index = index - 1;
	}
}
