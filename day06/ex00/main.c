/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/06 15:10:07 by slisandr          #+#    #+#             */
/*   Updated: 2019/03/06 15:10:09 by slisandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str);

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		printf("or_strlen: %ld\n", strlen(argv[1]));
		printf("ft_strlen: %d\n", ft_strlen(argv[1]));
	}
	return (0);
}
