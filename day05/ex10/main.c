/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/05 22:08:52 by slisandr          #+#    #+#             */
/*   Updated: 2019/03/05 22:12:03 by slisandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);

int		main(int argc, char **argv)
{
	if (argc > 1)
	{
		printf("ft_strcapitalize: %s\n", ft_strcapitalize(argv[1]));
	}	
	return (0);
}
