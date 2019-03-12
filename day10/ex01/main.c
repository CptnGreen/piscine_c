/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/12 18:54:46 by slisandr          #+#    #+#             */
/*   Updated: 2019/03/12 19:06:19 by slisandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_foreach(int *tab, int length, void(*f)(int));
void	ft_putnbr(int nbr);

int		main(int argc, char **argv)
{
	int	i;
	int	array[10];

	i = 0;
	if (argc > 1)
	{
		while (i < argc - 1)
		{
			array[i] = atoi(argv[i + 1]);
			i++;
		}
		ft_foreach(array, i + 1, &ft_putnbr);
	}
	return (0);
}
