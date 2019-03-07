/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/07 16:03:12 by slisandr          #+#    #+#             */
/*   Updated: 2019/03/07 17:02:55 by slisandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*ptr;
	int		i;

	i = 0;
	ptr = 0;
	if (min >= max)
		return (ptr);
	else
	{
		ptr = (int *)malloc(4 * (max - min));
		while (i < (max - min))
		{
			ptr[i] = min + i;
			i++;
		}
		return (ptr);
	}
}
