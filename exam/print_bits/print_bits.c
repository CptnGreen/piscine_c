/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/21 22:16:49 by slisandr          #+#    #+#             */
/*   Updated: 2019/03/21 22:36:24 by slisandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	print_bits(unsigned char octet);

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		print_bits(atoi(argv[1]));	
	}
	else
		printf("\n");
	return (0);
}

void	print_bits(unsigned char octet)
{
	int		i;
	char	c;

	i = 8;
	while (i >= 0)
	{
		c = (octet >> i) & 1;	
		printf("%d", c);
		i--;
	}
		printf("\n");
}
