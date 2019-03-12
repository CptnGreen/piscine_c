/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/12 19:19:09 by slisandr          #+#    #+#             */
/*   Updated: 2019/03/12 19:23:34 by slisandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

#define LEN 5

int		ft_intcmp(int a, int b);
int		ft_is_sort(int *tab, int length, int (*f)(int, int));

int		main(int argc, char **argv)
{
	int		i;
	int		array[LEN];

	i = 0;
	if (argc == LEN + 1)
	{
		while (i < LEN)
		{
			array[i] = atoi(argv[i + 1]);
			i++;
		}
		printf("ft_is_sort(): %d\n", ft_is_sort(array, LEN, &ft_intcmp));
	}
}
