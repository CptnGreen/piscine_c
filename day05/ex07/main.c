/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/05 12:57:09 by slisandr          #+#    #+#             */
/*   Updated: 2019/03/05 20:23:31 by slisandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int		main(int argc, char **argv)
{
	if (argc > 1)
	{
		printf("or_strcmp: %d\n", strncmp(argv[1], argv[2], atoi(argv[3])));
		printf("ft_strcmp: %d\n", ft_strncmp(argv[1], argv[2], atoi(argv[3])));
	}
	return (0);
}
