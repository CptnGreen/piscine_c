/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/05 12:57:09 by slisandr          #+#    #+#             */
/*   Updated: 2019/03/05 20:02:51 by slisandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int		ft_strcmp(char *s1, char *s2);

int		main(int argc, char **argv)
{
	if (argc > 1)
	{
		printf("or_strcmp: %d\n", strcmp(argv[1], argv[2]));
		printf("ft_strcmp: %d\n", ft_strcmp(argv[1], argv[2]));
	}
	return (0);
}
