/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/12 19:47:19 by slisandr          #+#    #+#             */
/*   Updated: 2019/03/12 19:54:07 by slisandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str);

int		ft_any(char **tab, int (*f)(char *));

int		main(int argc, char **argv)
{
	if (argc > 1)
	{
		printf("ft_any(): %d\n", ft_any(argv, &ft_strlen));
	}
	return (0);
}
