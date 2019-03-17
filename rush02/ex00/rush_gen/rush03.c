/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/03 16:37:42 by slisandr          #+#    #+#             */
/*   Updated: 2019/03/03 18:42:59 by slisandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char c);

void	rush(int x, int y)
{
	int i;
	int j;

	if (x > 0 && y > 0)
	{
		j = 1;
		while (j <= y)
		{
			i = 1;
			while (i <= x)
			{
				if (i != x && j != y && i != 1 && j != 1)
					ft_putchar(' ');
				else if ((i == 1 && j == 1) || (i == 1 && j == y))
					ft_putchar('A');
				else if ((i == x && j == 1) || (i == x && j == y))
					ft_putchar('C');
				else
					ft_putchar('B');
				i++;
			}
			j += 1;
			ft_putchar('\n');
		}
	}
}
