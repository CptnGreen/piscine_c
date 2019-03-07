/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/07 16:16:50 by slisandr          #+#    #+#             */
/*   Updated: 2019/03/07 17:21:38 by slisandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int min, int max);

int		main(int argc, char **argv)
{
	int		i;
	int		min;
	int		max;
	int		*ptr;

	i = 0;
	if (argc > 1)
	{
		min = (int)atoi(argv[1]);
		max = (int)atoi(argv[2]);
		ptr = ft_range(min, max);
		while (i < (max - min))
		{
			printf("%d ", ptr[i]);
			i++;
		}
		printf("\n");
	}
	return (0);
}
