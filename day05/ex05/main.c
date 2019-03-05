/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/05 12:57:09 by slisandr          #+#    #+#             */
/*   Updated: 2019/03/05 16:52:19 by slisandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strstr(char *str, char *to_find);

int		main(int argc, char **argv)
{
	if (argc > 1)
	{
		printf("or_strstr: %s\n", strstr(argv[1], argv[2]));
		printf("ft_strstr: %s\n", ft_strstr(argv[1], argv[2]));
	}
	return (0);
}
