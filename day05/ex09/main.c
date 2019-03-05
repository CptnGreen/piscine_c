/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/05 20:54:47 by slisandr          #+#    #+#             */
/*   Updated: 2019/03/05 20:58:41 by slisandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strlowcase(char *str);

int		main(int argc, char **argv)
{
	if (argc > 1)
	{
		printf("ft_strlowcase: %s\n", ft_strlowcase(argv[1]));
	}
	return (0);
}
