/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/11 18:54:02 by slisandr          #+#    #+#             */
/*   Updated: 2019/03/11 22:27:08 by slisandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

/*
** void		ft_putchar(char c);
** void		ft_swap(int *a, int *b);
** void		ft_putstr(char *str);
** int		ft_strlen(char *str);
** int		ft_strcmp(char *s1, char *s2);
*/

int		main(int argc, char **argv)
{
	int		a;
	int		b;

	a = 3;
	b = 15;
	if (argc > 1)
	{
		printf("1) ft_putchar():\n");
		ft_putchar(argv[1][0]);
		printf("\n");

		printf("2) ft_putstr():\n");
		ft_putstr(argv[1]);
		printf("\n");

		printf("3) ft_strlen(): %d\n", ft_strlen(argv[1]));

		printf("4) ft_swap(): a=%d and b=%d VS ", a, b);
		ft_swap(&a, &b);
		printf("a=%d and b=%d\n", a, b);

		if (argc > 2)
			printf("5) ft_strcmp(): %d\n", ft_strcmp(argv[1], argv[2]));
	}
	return (0);
}
