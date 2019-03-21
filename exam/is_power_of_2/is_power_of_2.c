/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/21 21:51:17 by slisandr          #+#    #+#             */
/*   Updated: 2019/03/21 21:58:38 by slisandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		is_power_of_2(unsigned int n);

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("res = %d\n", is_power_of_2(atoi(argv[1])));
	}
	return (0);
}

int		is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	else
		return (((n & n - 1) == 0) ? 1 : 0);
}
