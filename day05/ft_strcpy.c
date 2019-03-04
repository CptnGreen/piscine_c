/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 16:44:41 by slisandr          #+#    #+#             */
/*   Updated: 2019/03/04 17:44:39 by slisandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int i;
	
	i = 0;
	while (dest[i] != '\0' && src[i] != '\0')
	{
		if (dest[i] == '\0' && src[i] == '\0')
			return (dest + i + 1);
		else if (dest[i] == '\0' && src[i] != '\0')
			return (dest + i + 1);
		else if (dest[i] != '\0' && src[i] == '\0')
		{
			dest[i] = '\0';
			i += 1;
		}
		else
		{
			dest[i] = src[i];	
			i += 1;
		}
	}
	return (dest + i + 1);
}
