/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/07 15:52:53 by slisandr          #+#    #+#             */
/*   Updated: 2019/03/07 16:00:28 by slisandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int 	i;
	int		j;
	char	*ptr;

	i = 0;
	while (src[i] != '\0')
		i++;
	ptr = (char *)malloc(i + 1);
	j = 0;
	while (j <= i)
	{
		ptr[j] = src[j];
		j++;
	}
	return (ptr);
}
