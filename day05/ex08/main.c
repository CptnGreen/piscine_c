/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/05 12:57:09 by slisandr          #+#    #+#             */
/*   Updated: 2019/03/05 20:48:32 by slisandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strupcase(char *str);

int		main(int argc, char **argv)
{
	if (argc > 1)
	{
		printf("ft_strupcase: %s\n", ft_strupcase(argv[1]));
	}
	return (0);
}
