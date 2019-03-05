/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/05 12:57:09 by slisandr          #+#    #+#             */
/*   Updated: 2019/03/05 16:04:55 by slisandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main(int argc, char **argv)
{
	if (argc > 1)
	{
		printf("or_strNcpy: %s\n", strncpy(argv[1], argv[2], atoi(argv[3])));
		printf("ft_strNcpy: %s\n", ft_strncpy(argv[1], argv[2], atoi(argv[3])));
	}
	return (0);
}
